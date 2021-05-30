# Write your MySQL query statement below
SELECT dep.Name AS Department, emp.Name as Employee, emp.Salary
FROM Department dep, Employee emp
where emp.DepartmentId = dep.Id
AND emp.Salary = (Select max(Salary) from Employee e2 where e2.DepartmentId = dep.Id);
