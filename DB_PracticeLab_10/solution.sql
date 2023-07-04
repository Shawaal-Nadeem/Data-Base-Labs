select*from employee;
select*from transaction;
select *from customer;
select *from savingaccounts;
select*from bank;
select*from branch;
select*from loanaccounts;

-- Task 1
select name,transaction_id from employee inner join transaction on employee.eid=transaction.eid where transaction.transaction_amount>100000; 

-- Task 2
select name,Account_number from customer left join savingaccounts on customer.customer_id=savingaccounts.customer_id where current_balance>10000 and current_balance<50000;

-- Task 3
select Account_number,name from savingaccounts left join customer on savingaccounts.customer_id=customer.customer_id;

-- Task 4
select transactionDetails,name from transaction inner join savingaccounts on transaction.savingAccount_number=savingaccounts.Account_number inner join customer on savingaccounts.customer_id=customer.customer_id;

-- Task 5
select name from employee inner join branch on employee.branch_id=branch.branch_id inner join bank on bank.bank_id=branch.bank_id where bank.bank_name like 'M%';

-- Task 6
select Account_number from loanaccounts right join customer on loanaccounts.customer_id=customer.customer_id where customer.name like 'I%n';

-- Task 7
select name,transaction_amount from employee left join transaction on employee.eid=transaction.eid;

-- Task 8
select name,Address,branch_address,bank_name from customer inner join savingaccounts on customer.customer_id=savingaccounts.customer_id inner join branch on savingaccounts.branch_id=branch.branch_id inner join bank on branch.bank_id=bank.bank_id;

-- Task 9
select name,phoneNum,current_balance from customer left join savingaccounts on customer.customer_id=savingaccounts.customer_id where savingaccounts.current_balance is NULL;

-- Task 10
select name,designation,branch_address,bank_name from employee right join branch on employee.branch_id=branch.branch_id right join bank on branch.bank_id=bank.bank_id;