select*from employee;
select*from transaction;
select*from customer;
select*from savingaccounts;
-- Task 1
select name,transaction_id from employee inner join transaction on employee.eid=transaction.eid where transaction_amount>100000;

-- Task 2
select name from customer inner join savingaccounts on customer.customer_id=savingaccounts.customer_id where current_balance>10000 and current_balance<50000;

-- Task 3
select Account_number,name from savingaccounts inner join customer on savingaccounts.customer_id=customer.customer_id; 

-- Task 4
SELECT transaction.transactionDetails, customer.name
FROM transaction
JOIN savingaccounts ON savingaccounts.Account_number = transaction.savingAccount_number
JOIN customer ON savingaccounts.customer_id = customer.customer_id
WHERE savingaccounts.current_balance > 150000;

