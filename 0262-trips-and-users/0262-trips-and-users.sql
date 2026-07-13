# Write your MySQL query statement below
SELECT T.request_at AS 'day',
ROUND((SUM(CASE WHEN T.status LIKE 'cancelled_by_%' THEN 1 ELSE 0 END)/COUNT(T.status)),2) AS 'Cancellation Rate'
FROM Trips AS T
JOIN Users AS U ON T.client_id = U.users_id
JOIN Users AS D ON T.driver_id = D.users_id
WHERE U.banned != 'Yes' AND D.banned != 'Yes'
AND T.request_at BETWEEN '2013-10-01' AND '2013-10-03'
GROUP BY T.request_at