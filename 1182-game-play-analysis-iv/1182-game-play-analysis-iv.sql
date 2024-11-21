# Write your MySQL query statement below
-- SELECT ROUND(COUNT(*) /(SELECT COUNT(DISTINCT player_id) FROM Activity),2) fraction
-- FROM Activity a1 ,  Activity a2

-- WHERE a1.player_id=a2.player_id and DATE(a1.event_date)-DATE(a2.event_date)=1 and a1.games_played!=0
WITH Expectations AS (
SELECT player_id,
MIN(event_Date) as ev
FROM Activity 
GROUP BY player_id
)

SELECT ROUND(COUNT(*) /(SELECT COUNT(DISTINCT player_id) FROM Activity),2) fraction FROM Activity A
JOIN Expectations E
    ON A.player_id = E.player_id
WHERE A.games_played!=0 AND A.event_date=E.ev + INTERVAL 1 DAY