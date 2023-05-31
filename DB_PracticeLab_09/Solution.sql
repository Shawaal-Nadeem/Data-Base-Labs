select*from employees;
select*from offices;
select*from payments;
select*from customers;
select*from orders;
select*from products;
select*from orderdetails;
-- Task 1
select firstName,lastName from employees where officeCode=(select officeCode from offices where city ='San Francisco' AND country ='USA');

-- Task 2
select customerName from customers where customerNumber IN(select customerNumber from payments where amount between 1000 and 5000);

-- Task 3
select customerName,phone from customers where customerNumber IN(select customerNumber from orders where orderDate >='2003-01-01' and orderDate<='2003-12-31' AND shippedDate>='2003-01-01' and shippedDate<='2003-12-31');

-- Task 4
select*from customers where customerNumber IN(select customerNumber from orders where status = 'On Hold');

-- Task 5
select productCode,productName from products where productCode IN(select productCode from orderdetails where quantityOrdered >30 AND quantityOrdered <50);

-- Task 6
select customerName from customers where customerNumber IN(select customerNumber from orders where status = 'Cancelled');

-- Task 7
select orderNumber from orderdetails where (quantityOrdered*priceEach)>6000;

-- Task 8
select customerName from customers where Exists(SELECT customerNumber FROM orders WHERE EXISTS (SELECT * FROM payments WHERE payments.customerNumber = orders.customerNumber AND amount > 60000) GROUP BY customerNumber HAVING COUNT(customerNumber) >= 2);