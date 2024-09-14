/*
Database: Mysql
Problem: https://www.hackerrank.com/challenges/more-than-75-marks/problem?isFullScreen=true
*/
SELECT NAME
FROM STUDENTS
WHERE MARKS > 75
order by right(NAME,3), ID;
