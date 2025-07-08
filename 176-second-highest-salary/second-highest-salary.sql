# Write your MySQL query statement below
Select MAX(salary) AS SecondHighestSalary from employee where salary < (Select MAX(salary) from employee);