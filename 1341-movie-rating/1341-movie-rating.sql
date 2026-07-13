# Write your MySQL query statement below

(SELECT U.name AS results
FROM Users AS U
LEFT JOIN MovieRating AS MR ON U.user_id = MR.user_id
GROUP BY U.name
ORDER BY COUNT(MR.user_id) DESC, name ASC
LIMIT 1)
UNION ALL
(SELECT M.title AS results
FROM Movies AS M
LEFT JOIN MovieRating AS MR ON M.movie_id = MR.movie_id
WHERE YEAR(MR.created_at) = 2020 AND MONTH(MR.created_at) = 02
GROUP BY M.title
ORDER BY AVG(MR.rating) DESC, M.title ASC
LIMIT 1);