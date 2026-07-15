# Write your MySQL query statement below
SELECT C.name AS Customers
FROM Customers AS C
LEFT JOIN Orders AS O ON C.id = O.customerId
GROUP BY C.id, C.name
HAVING COUNT(O.customerId) < 1