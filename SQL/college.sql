CREATE DATABASE college;

USE college;

CREATE TABLE student(
	id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT NOT NULL
);

INSERT INTO student VALUES(1,"Raunak",18);
INSERT INTO student VALUES(2,"Gupta",19);
SELECT * FROM student;

SHOW TABLES;
DROP TABLE student;
SHOW DATABASES;

CREATE TABLE student(
	rollno INT PRIMARY KEY,
    name VARCHAR(50)
);

SHOW TABLES;

INSERT INTO student 
(rollno,name)
VALUES
(101,"Raunak"),
(102,"Abhishek"),
(103,"Jayraaj");

SELECT * FROM student;
SELECT name FROM student;

show databases;
use world;
show tables;
select * from country;
use sakila;
show tables;
select * from  city;
drop database world;

drop database college;

CREATE DATABASE college;
USE college;
CREATE TABLE student(
	rollno INT PRIMARY KEY,
	name VARCHAR(50),
    marks INT NOT NULL,
    grade VARCHAR(1),
    city VARCHAR(20)
);

INSERT INTO student2  (rollno, name, marks, grade, city) 
VALUES (101,"anil",78,"C","Pune"),
(102,"bhumika",93,"A","Mumbai"),
(103,"chetan",85,"B","Mumbai"),
(104,"dhruv",96,"A","Delhi"),
(105,"emanuel",12,"F","Delhi"),
(106,"farah",82,"B","Delhi");
              
USE college;
SHOW tables;
SELECT * FROM student;


SELECT rollno,name, marks FROM student WHERE marks >= 80 AND city="Delhi";
SELECT rollno,name, marks FROM student WHERE marks BETWEEN 70 AND 90;
SELECT rollno,name, marks FROM student WHERE city NOT IN ("Delhi", "Mumbai");
SELECT rollno,name, marks FROM student LIMIT 3;
SELECT rollno,name, marks FROM student ORDER BY marks ASC ;
SELECT rollno,name, marks FROM student ORDER BY marks DESC LIMIT 3 ;
SELECT grade, COUNT(grade) FROM student GROUP BY grade ORDER BY grade ASC;
SELECT city, AVG(marks) FROM student GROUP BY city ORDER BY AVG(marks) ASC;

SET SQL_SAFE_UPDATES = 0;

UPDATE student 
SET grade = "O"
WHERE grade = "A";

SET SQL_SAFE_UPDATES = 0;

UPDATE student 
SET marks = 82
WHERE name = "emanuel";

UPDATE student SET grade = "A" WHERE grade = "O";

SELECT * FROM student;

SHOW DATABASES;
SHOW TABLES;
USE college;

SELECT * FROM student;
DELETE FROM student WHERE rollno=107 OR rollno=108;
INSERT INTO student (rollno,name,marks,grade,city) VALUES (107,"Student1",55,"F","Ajmer"),(108,"Student2",55,"F","Ajmer");

CREATE TABLE dept(
	id INT PRIMARY KEY,
    name VARCHAR(50)
);

CREATE TABLE teachers(
	id INT PRIMARY KEY,
    name VARCHAR(50),
    dept_id INT,
    FOREIGN KEY (dept_id) REFERENCES dept(id)
    ON UPDATE CASCADE
    ON DELETE CASCADE
);

INSERT INTO dept 
VALUES (101,"Math"),
(102,"Computer"),
(103,"Science");

SELECT * FROM dept;

INSERT INTO teachers 
VALUES 
(111,"ajay",101),
(222,"singh",102),
(333,"mathur",103);

SELECT * FROM teachers;

DROP TABLE teachers;

UPDATE DEPT SET id = 110 WHERE id = 101;
UPDATE DEPT SET ID = 220 WHERE ID = 102;
UPDATE DEPT SET ID = 330 WHERE ID = 103;
SELECT * FROM DEPT;
SELECT * FROM TEACHERS;
SHOW TABLES;

select * from student2;

ALTER TABLE student2 ADD COLUMN money INT NOT NULL DEFAULT 1000;
ALTER TABLE student2 CHANGE money length INT;
ALTER TABLE student2 DROP COLUMN length;
ALTER TABLE STUD2 RENAME TO student2;

CREATE DATABASE TEST;
USE TEST;

SHOW TABLES;
CREATE TABLE TAST(
	MY_DATE DATE,
    MY_TIME TIME,
    MY_DATETIME DATETIME
);


