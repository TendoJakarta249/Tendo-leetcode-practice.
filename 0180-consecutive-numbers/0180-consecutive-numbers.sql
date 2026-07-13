# Write your MySQL query statement below
SELECT DISTINCT L1.num AS ConsecutiveNums
FROM Logs AS L1
JOIN Logs AS L2 ON L1.id + 1 = L2.id
JOIN Logs AS L3 ON L2.id + 1 = L3.id
WHERE L1.num = L2.num AND L2.num = L3.num

/* WITH RankedLogs AS (
    SELECT 
        num,
        LEAD(num, 1) OVER (ORDER BY id) AS next_num,
        LEAD(num, 2) OVER (ORDER BY id) AS next_next_num
    FROM Logs
)
SELECT DISTINCT num AS ConsecutiveNums
FROM RankedLogs
WHERE num = next_num AND num = next_next_num; */

#Shift + A + Alt
