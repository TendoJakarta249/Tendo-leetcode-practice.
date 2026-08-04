WITH CompanyName AS (
    SELECT C.name, O.sales_id
    FROM Company AS C
    RIGHT JOIN Orders AS O
    ON C.com_id = O.com_id
)

SELECT S.name
FROM SalesPerson AS S
WHERE S.sales_id NOT IN
(
    SELECT CN.sales_id
    FROM CompanyName AS CN
    WHERE CN.name = 'RED'
);

/* SELECT name
FROM salesperson
WHERE sales_id not in (SELECT sales_id
FROM orders
WHERE com_id = (SELECT com_id
FROM company
WHERE name = "Red")) */