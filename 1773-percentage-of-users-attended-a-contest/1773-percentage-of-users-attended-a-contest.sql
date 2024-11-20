# Write your MySQL query statement below


SELECT r.contest_id,
 ROUND((COUNT(DISTINCT r.user_id)/(SELECT COUNT(*) FROM Users u)*100.0),2) percentage
 from Register r
group by r.contest_id
order by percentage desc , r.contest_id asc
