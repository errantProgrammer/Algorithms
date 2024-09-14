/*
Database: Mysql
Problem: https://www.hackerrank.com/challenges/weather-observation-station-10/problem?isFullScreen=true
*/
SELECT DISTINCT CITY
FROM STATION
WHERE RIGHT(CITY,1) NOT IN ('A','E','I','O','U');
