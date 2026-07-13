# Write your MySQL query statement below
SELECT E.name AS Employee
FROM Employee AS E
INNER JOIN Employee AS M
ON E.managerId = M.id
WHERE M.salary<E.salary