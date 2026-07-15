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

/* SELECT d.name AS 'Department', 
       e1.name AS 'Employee', 
       e1.salary AS 'Salary' 
FROM Employee e1
JOIN Department d
ON e1.departmentId = d.id 
WHERE
    3 > (SELECT COUNT(DISTINCT e2.salary)
        FROM Employee e2
        WHERE e2.salary > e1.salary AND e1.departmentId = e2.departmentId); */