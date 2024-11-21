-- # Write your MySQL query statement below
SELECT CONCAT(YEAR(t.trans_date), '-', LPAD(MONTH(t.trans_date), 2, '0')) AS month,
 t.country ,
COUNT(t.trans_date) trans_count ,
SUM(t.state='approved') approved_count,
SUM(t.amount) trans_total_amount,
SUM(IF(state='approved',t.amount,0)) approved_total_amount
FROM Transactions t
GROUP BY month , t.country


-- // approved_count 
-- SELECT COUNT(*) FROM Transactions t 
--  WHERE state='approved'
--  GROUP BY t.trans_date,t.country