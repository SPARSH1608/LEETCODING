# Write your MySQL query statement below
SELECT name from Customer  as c
WHERE c.referee_id IS  NULL or c.referee_id!=2;