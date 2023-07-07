select*from customers;
select*from employees;
select*from offices;
select*from orderdetails;
select*from orders;
select*from payments;
select*from productlines;
select*from products;

-- Task 1
create view NotOrderCustomers as
select customers.customerNumber,customers.customerName from customers left join orders on customers.customerNumber=orders.customerNumber where orders.customerNumber is NULL;
select*from notordercustomers;

-- Task 2
create view CompleteRegistrationNumber as
select employees.employeeNumber,employees.firstName,employees.lastName from employees; 
select employeeNumber,firstName,lastName from completeregistrationnumber;

-- Task 3
drop view if exists CompleteRegistrationNumber;
create view CompleteRegistrationNumber as
select employees.employeeNumber,employees.firstName,employees.lastName from employees where employees.reportsTo is NULL; 
select employeeNumber,firstName,lastName from completeregistrationnumber;

-- Task 4
create view fourdigitsofyourregistrationno as
select employees.employeeNumber,employees.firstName,employees.lastName,offices.city from employees inner join offices on employees.officeCode=offices.officeCode;
select*from fourdigitsofyourregistrationno;

-- Task 5
create procedure AllEmployeeRecords ()
select*from employees;
call AllEmployeeRecords;

-- Task 6
create procedure AllEmployeeRecords (IN oc int)
select*from employees where officeCode=oc;
call AllEmployeeRecords(2);

-- Task 7
create procedure AllEmployeeRecords (IN oc int)
select count(*)from employees where officeCode=oc;
call AllEmployeeRecords(6);

-- Task 8


-- Task 9
drop view if exists completeregistrationnumber;
drop procedure if exists AllEmployeeRecords;

-- Task 10
create procedure CustomerRecords(IN ordernum int)
select customers.customerName,customers.customerNumber from customers inner join orders on customers.customerNumber=orders.customerNumber where orders.orderNumber=ordernum;
call CustomerRecords(10100);