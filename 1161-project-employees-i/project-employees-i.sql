# Write your MySQL query statement below
SELECT project_id, ROUND(AVG(e.experience_years),2) AS average_years
From Project p
LEFT JOIN Employee e
ON p.employee_id = e.Employee_id
GROUP BY project_id;