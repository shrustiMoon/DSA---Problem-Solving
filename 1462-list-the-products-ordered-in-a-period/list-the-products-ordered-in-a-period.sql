# Write your MySQL query statement below
SELECT P.product_name, SUM(O.unit) AS unit
FROM Products P
JOIN Orders O
ON P.product_id = O.product_id
WHERE MONTH(order_date) = 02 AND 
      YEAR(order_date) = 2020
GROUP BY P.product_id
HAVING SUM(O.unit) >= 100;      