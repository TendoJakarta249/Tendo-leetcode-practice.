# Write your MySQL query statement below
WITH RANKING AS (
    SELECT departmentId, salary, name,
            DENSE_RANK() OVER (PARTITION BY departmentId 
                            ORDER BY salary DESC) AS SARANK
    FROM Employee
)
SELECT D.name AS Department,
        R.name AS Employee,
        R.salary AS Salary
FROM RANKING AS R
LEFT JOIN Department AS D ON R.departmentId = D.id
WHERE R.SARANK <= 3