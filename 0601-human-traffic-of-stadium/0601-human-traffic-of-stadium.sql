# Write your MySQL query statement below
WITH F AS (
    SELECT id,
           id - ROW_NUMBER() OVER (ORDER BY id) AS group_id
    FROM Stadium
    WHERE people >=100
),
GC AS (
    SELECT id,
            COUNT(*) OVER (PARTITION BY group_id) AS cnt
    FROM F
)
SELECT S.id, S.visit_date, S.people
FROM Stadium AS S
INNER JOIN GC AS G ON S.id = G.id
WHERE G.cnt>=3
ORDER BY S.visit_date ASC
 
