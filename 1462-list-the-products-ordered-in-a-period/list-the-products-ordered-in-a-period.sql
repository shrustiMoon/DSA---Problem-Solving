# Write your MySQL query statement below
SELECT P.product_name, SUM(S.unit) as unit
FROM Products P
JOIN Orders S
ON P.product_id = S.product_id
WHERE MONTH(order_date) = 02 AND YEAR(order_date)=2020
GROUP BY P.product_id
HAVING SUM(S.unit)>=100;
