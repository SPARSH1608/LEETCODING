# Write your MySQL query statement below
SELECT DISTINCT author_id AS id FROM Views as v
where v.author_id=v.viewer_id 
ORDER BY author_id;