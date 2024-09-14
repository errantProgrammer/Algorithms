/*
Database: Mysql
Problem: https://www.hackerrank.com/challenges/weather-observation-station-8/problem?isFullScreen=true
*/
SELECT DISTINCT CITY
FROM STATION
WHERE LEFT(CITY, 1) IN ('A', 'E', 'I', 'O', 'U')
  AND RIGHT(CITY, 1) IN ('A', 'E', 'I', 'O', 'U');
