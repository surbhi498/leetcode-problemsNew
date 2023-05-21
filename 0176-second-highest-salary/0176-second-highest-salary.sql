SELECT MAX(Salary) as SecondHighestSalary 
from Employee 
WHERE Salary NOT IN (SELECT MAX(Salary) from Employee)
