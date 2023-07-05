select*from employee;
select*from transaction;
select *from customer;
select *from savingaccounts;
select*from bank;
select*from branch;
select*from loanaccounts;

-- Task 1
select name,phoneNum,current_credit from customer inner join loanaccounts on customer.customer_id=loanaccounts.customer_id where loanaccounts.current_credit>15000;

-- Task 2
select name,Address,current_credit from customer inner join loanaccounts on customer.customer_id=loanaccounts.customer_id where customer.name='Imran Khan';

-- Task 3
select name,phoneNum,current_balance from customer left join savingaccounts on customer.customer_id=savingaccounts.customer_id where savingaccounts.current_balance is NULL;

-- Task 4
select*from customer where customer.customer_id IN (select customer_id from loanaccounts where loanaccounts.customer_id NOT IN (select customer_id from savingaccounts));

-- Task 5
select*from customer where customer_id IN (select customer_id from savingaccounts where branch_id IN (select branch_id from bank));

-- Task 6
select branch.branch_id,branch.branch_address from branch where branch.bank_id IN (select bank_id from bank where bank_name ='Allied Bank Limited');

-- Task 7
select name,designation,branch_address,bank_name from employee right join branch on employee.branch_id=branch.branch_id right join bank on branch.bank_id=bank.bank_id;

-- Task 8
select branch.bank_id from branch where branch_id IN (select branch_id from savingaccounts where customer_id IN (select customer_id from loanaccounts)); 