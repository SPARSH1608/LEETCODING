# Write your MySQL query statement below
SELECT tweet_id from Tweets t
where LENGTH(t.content)>15;