# Write your MySQL query statement below
SELECT q.query_name, ROUND(AVG(q.rating/q.position) ,2) quality ,
ROUND(AVG(IF(q.rating<3,1,0)*100.0),2)
 as  poor_query_percentage 
FROM Queries q
WHERE q.query_name IS NOT NULL
group by q.query_name

-- SELECT COUNT(q.rating) FROM Queries q

-- group by q.query_name


-- SELECT COUNT(q.rating) FROM Queries q
-- group by q.query_name

-- SELECT SUM(IF(q.rating<3,1,0) )FROM Queries q
-- group by q.query_name