# Write your MySQL query statement below
SELECT S1.score, COUNT( DISTINCT S2.score) AS 'rank'
FROM Scores AS S1
INNER JOIN Scores AS S2
ON S2.score >= S1.score
GROUP BY S1.id, S1.score
ORDER BY S1.score DESC

#SELECT 
    #score,
    #DENSE_RANK() OVER (ORDER BY score DESC) AS rank
#FROM 
    #Scores
#ORDER BY 
    #score DESC;
