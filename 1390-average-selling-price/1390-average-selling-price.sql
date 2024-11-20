# Write your MySQL query statement below
SELECT p.product_id,
IFNULL(ROUND((SUM(s.units*p.price)/SUM(s.units)),2),0) average_price
from Prices p
left join UnitsSold s
on p.product_id=s.product_id and s.purchase_date BETWEEN p.start_date AND p.end_date
group by p.product_id