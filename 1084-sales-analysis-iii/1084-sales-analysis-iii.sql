# Write your MySQL query statement below
SELECT P.product_id, P.product_name
FROM Product AS P
WHERE P.product_id IN (SELECT product_id FROM Sales) 
AND P.product_id NOT IN 
(
    SELECT product_id
    FROM Sales
    WHERE sale_date > '2019-03-31' OR sale_date < '2019-01-01'
)