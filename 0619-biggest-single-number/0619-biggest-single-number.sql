# Write your MySQL query statement below
SELECT MAX(num) as num FROM(
            SELECT num
        from MyNumbers
        GROUP BY num
        HAVING COUNT(num)=1 
        ORDER BY num DESC
        LIMIT 1
) new

