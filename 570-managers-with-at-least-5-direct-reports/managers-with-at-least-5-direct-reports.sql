# Write your MySQL query statement below
select e1.name
from employee e1
INNER JOIN employee e2
ON e1.id = e2.managerId
GROUP BY e2.managerId
HAVING COUNT(e2.managerId) >= 5