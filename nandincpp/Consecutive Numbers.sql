# Write your MySQL query statement below
SELECT DISTINCT c.Num AS ConsecutiveNums 
FROM Logs a
INNER JOIN Logs b
ON a.Num = b.Num AND a.Id=b.Id-1
INNER JOIN Logs c
ON a.Num = c.Num AND c.Id=b.Id+1

