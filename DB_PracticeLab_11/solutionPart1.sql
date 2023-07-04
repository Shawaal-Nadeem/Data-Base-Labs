select*from employee;
select*from transaction;
select *from customer;
select *from savingaccounts;
select*from bank;
select*from branch;
select*from loanaccounts;

-- Task 8
select name,savingAccount_number from customer inner join savingaccounts on customer.customer_id=savingaccounts.customer_id inner join transaction on savingaccounts.Account_number=transaction.savingAccount_number where transaction.transaction_date>='2016-01-01' and transaction_date<='2016-12-31';

-- Task 9
select name,branch_address,bank_name,HeadOfficeAddress from employee left join branch on employee.branch_id=branch.branch_id inner join bank on branch.bank_id=bank.bank_id;

-- Task 10
select name,sum(transaction_amount) from employee left join transaction on employee.eid=transaction.eid group by employee.name;