/*
Database: Mysql
Problem:https://www.hackerrank.com/challenges/weather-observation-station-5/problem?isFullScreen=true
*/
(
SELECT CITY, LENGTH(CITY) AS NAME_LENGTH
FROM STATION
ORDER BY LENGTH(CITY), CITY
LIMIT 1
) UNION ALL
(
SELECT CITY, LENGTH(CITY) AS NAME_LENGTH
FROM STATION
ORDER BY LENGTH(CITY) DESC, CITY
LIMIT 1
);
