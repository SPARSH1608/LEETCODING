# Write your MySQL query statement below
-- SELECT s.product_id, s.year, s.quantity, s.price
-- FROM Sales s
-- JOIN Product p
-- ON s.product_id=p.product_id


with sale as (
SELECT *,
rank() over (partition by product_id order by year) as rw
from sales
)
select product_id,year as first_year, quantity, price from sale
where rw=1

-- select product_id,year as first_year, quantity, price
-- from Sales
-- where(product_id, year) in (select  product_id, min(year) from Sales group by product_id)
