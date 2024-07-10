create database office;
use office;

/*question 1*/
create table student(
rollno int primary key,
name varchar(50),
branch varchar(50));

insert into student 
values
(1,"jay","computer science"),
(2,"suhani","electronic and com."),
(3,"kriti","electronic and com.");


create table exam(
rollno int,
s_code varchar(20),
marks int , 
p_code varchar(50),
foreign key(rollno) references student(rollno));

insert into exam 
values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",60,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");
select * from exam;


/*question 2*/

CREATE TABLE Employee (
    Employee_id INT PRIMARY KEY,
    First_name VARCHAR(50),
    Last_name VARCHAR(50),
    Salary INT,
    Joining_date TIMESTAMP,
    Department VARCHAR(50)
);

INSERT INTO Employee (Employee_id, First_name, Last_name, Salary, Joining_date, Department) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01 12:00:00', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01 12:00:00', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-02-01 12:00:00', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 12:00:00', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01 12:00:00', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '2013-01-01 12:00:00', 'Services'),
(7, 'TestName1', '123', 650000, '2013-01-01 12:00:00', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01 12:00:00', 'Insurance');

use office;
CREATE TABLE Incentive (
  Employee_ref_id INT,
  Incentive_date DATE,
  Incentive_amount INT
);

INSERT INTO Incentive (Employee_ref_id, Incentive_date, Incentive_amount) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);
select * from Incentive;


/*question 3*/
SELECT First_name FROM Employee 
WHERE First_name = 'Tom';


/*question 4*/
SELECT First_name, Joining_date, Salary 
FROM Employee;

/*question 5*/
SELECT * 
FROM Employee 
ORDER BY First_name ASC, Salary DESC;

/*question 6*/
SELECT * FROM employee
WHERE first_name LIKE '%J%';

/*question 7*/
SELECT department, MAX(salary) AS max_salary
FROM employee
GROUP BY department
ORDER BY max_salary;


/*question 9 */ 
SELECT e.first_name, i.Incentive_amount
FROM employee e
left join incentive i ON e.Employee_id = i.Employee_ref_id
WHERE i.Incentive_amount > 3000;


/*question 10 error*/
DELIMITER //

CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO viewtable (employee_id, First_name)
    VALUES (NEW.employee_id, NEW.First_name);
END //

DELIMITER ;
    
    
    
    /*question 11*/
    
CREATE TABLE salesperson3 (
    sno INT PRIMARY KEY,
    sname VARCHAR(255),
    city VARCHAR(255),
    comm FLOAT
);


INSERT INTO salesperson3 VALUES
(1001, 'Peel', 'London', 0.12),
(1002, 'Serres', 'San Jose', 0.13),
(1004, 'Motika', 'London', 0.11),
(1007, 'Rafkin', 'Barcelona', 0.15),
(1003, 'Axelrod', 'New York', 0.1);


SELECT * FROM salesperson3;

CREATE TABLE customer5 (
    s_ref_no INT,
    cnm INT,
    cname VARCHAR(50),
    city VARCHAR(50),
    rating INT,
    FOREIGN KEY (s_ref_no) REFERENCES salesperson(sno)
);

INSERT INTO customer5 VALUES
(1, 201, 'Hoffman', 'London', 100),
(3, 202, 'Giovanne', 'Roe', 200),
(2, 203, 'Liu', 'San Jose', 300),
(2, 204, 'Grass', 'Barcelona', 100),
(3, 206, 'Clemens', 'London', 300),
(4, 207, 'Pereira', 'Roe', 100);

/*question 14*/
SELECT sname, city
FROM Salesperson3
WHERE city = 'London' AND comm < 0.12;

/*question 15*/

SELECT *
FROM salesperson3
WHERE city = 'Barcelona' OR city = 'London';

/*question 16*/
SELECT *
FROM Salesperson3
WHERE comm > 0.10 AND comm < 0.12;

/*question 17*/

SELECT * FROM Customer5
WHERE rating > 100 OR (rating <= 100 AND city = 'Rome');

/*question 18*/

CREATE TABLE Salespeople (
    salesman_id INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(50),
    commission DECIMAL(4, 2)
);


INSERT INTO Salespeople (salesman_id, name, city, commission) VALUES
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'Mc Lyon', 'Paris', 0.14),
(5007, 'Paul Adam', 'Rome', 0.13),
(5003, 'Lauson Hen', 'San Jose', 0.12);	

select * from salesperson;

/*question 19*/

create table orders(
ord_no  int primary key not null,
purch_amt int,
ord_date date,
customer_id int ,
salesman_id int);

insert into orders
values
(70001,150.5,'2012-10-05',3005,5002),
(70009,270.65,'2012-09-10',3001,5005),
(70002,65.26,'2012-10-05',3002,5001),
(70004,110.5,'2012-08-17',3009,5003),
(70007,948.5,'2012-09-10',3005,5002),
(70005,2400.6,'2012-07-27',3007,5001),
(70008,5760,'2012-09-10',3002,5001),
(70010,1983.43,'2012-10-10',3004,5006),
(70003,2480.4,'2012-10-10',3009,5003),
(70012,250.45,'2012-06-27', 3008,5002),
(70011,75.29,'2012-08-17',3003,5007),
(70013,3045.6,'2012-04-25',3002,5001);

SELECT ord_no, ord_date, purch_amt
FROM Orders
WHERE salesman_id = 5001;

/*question 13*/

SELECT * FROM Orders
WHERE purch_amt > 1000;


/*questuon 20*/

CREATE TABLE Products (
    PRO_ID INT PRIMARY KEY,
    PRO_NAME VARCHAR(50),
    PRO_PRICE DECIMAL(10, 2),
    PRO_COM INT
);


INSERT INTO Products (PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM) VALUES
(101, 'Mother Board', 3200.00, 15),
(102, 'Key Board', 450.00, 16),
(103, 'ZIP drive', 250.00, 14),
(104, 'Speaker', 550.00, 16),
(105, 'Monitor', 5000.00, 11),
(106, 'DVD drive', 900.00, 12),
(107, 'CD drive', 800.00, 12),
(108, 'Printer', 2600.00, 13),
(109, 'Refill cartridge', 350.00, 13),
(110, 'Mouse', 250.00, 12);

SELECT PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM
FROM Products
WHERE PRO_PRICE BETWEEN 200.00 AND 600.00;

/*question 21*/
SELECT AVG(PRO_PRICE) AS avg_price
FROM Products
WHERE PRO_COM = 16;

/*question 22*/

SELECT
    PRO_NAME AS "Item Name",
    PRO_PRICE AS "Price in Rs."
FROM Products;

/*question 23*/

SELECT PRO_NAME AS pro_name, PRO_PRICE AS pro_price
FROM Products
WHERE PRO_PRICE >= 250.00
ORDER BY pro_price DESC, pro_name ASC;


/*question 24*/

SELECT PRO_COM AS company_code, AVG(PRO_PRICE) AS avg_price
FROM Products
GROUP BY PRO_COM;