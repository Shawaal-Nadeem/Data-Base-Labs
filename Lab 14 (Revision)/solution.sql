create database UniversityManagement;

create table University(
university_id int primary key,
name varchar(20),
location varchar(50)
);

create table Faculty(
faculty_id int primary key,
name varchar(20),
university_id int,
foreign key(university_id) references University(university_id)
);

create table School(
school_id int primary key,
name varchar(20),
faculty_id int,
foreign key(faculty_id) references Faculty(faculty_id)
);

create table Programs(
program_id int primary key,
name varchar(20),
school_id int,
foreign key(school_id) references School(school_id)
);

create table courses(
course_id int primary key,
name varchar(20),
program_id int,
foreign key (program_id) references Programs(program_id)
);

create table Student(
student_id int primary key,
name varchar(20),
phoneNum varchar(20),
location varchar(50),
program_id int,
foreign key (program_id) references Programs(program_id),
course_id int,
foreign key (course_id) references courses(course_id)
);

create table lecturer(
lecturer_id int,
name varchar(20),
course_id int,
foreign key (course_id) references courses(course_id)
);


INSERT INTO University (university_id, name, location)
VALUES
  (1, 'University of Science and Technology', 'New York'),
  (2, 'City College', 'London'),
  (3, 'Metropolitan University', 'Paris'),
  (4, 'Central University', 'Tokyo'),
  (5, 'Global University', 'Sydney');

INSERT INTO Faculty (faculty_id, name, university_id)
VALUES
  (1, 'Faculty of Engineering', 1),
  (2, 'Faculty of Arts and Humanities', 2),
  (3, 'Faculty of Business and Economics', 3),
  (4, 'Faculty of Social Sciences', 4),
  (5, 'Faculty of Medicine', 5);

INSERT INTO School (school_id, name, faculty_id)
VALUES
  (1, 'School of Computer Science', 1),
  (2, 'School of Literature and Languages', 2),
  (3, 'School of Management', 3),
  (4, 'School of Psychology', 4),
  (5, 'School of Medicine and Surgery', 5);

INSERT INTO Programs (program_id, name, school_id)
VALUES
  (1, 'Bachelor of Engineering', 1),
  (2, 'Bachelor of Arts', 2),
  (3, 'Bachelor of Business Administration', 3),
  (4, 'Bachelor of Psychology', 4),
  (5, 'Bachelor of Medicine', 5);

INSERT INTO courses (course_id, name, program_id)
VALUES
  (1, 'Introduction to Programming', 1),
  (2, 'English Literature Survey', 2),
  (3, 'Principles of Marketing', 3),
  (4, 'Cognitive Psychology', 4),
  (5, 'Anatomy and Physiology', 5);

INSERT INTO Student (student_id, name, phoneNum, location, program_id, course_id)
VALUES
  (1, 'John Smith', '1234567890', 'New York', 1, 1),
  (2, 'Emma Johnson', '9876543210', 'London', 2, 2),
  (3, 'Michael Brown', '4567890123', 'Paris', 3, 3),
  (4, 'Olivia Davis', '7890123456', 'Tokyo', 4, 4),
  (5, 'Sophia Wilson', '2345678901', 'Sydney', 5, 5);

INSERT INTO lecturer (lecturer_id, name, course_id)
VALUES
  (1, 'Dr. Robert Anderson', 1),
  (2, 'Prof. Laura Miller', 2),
  (3, 'Dr. David Clark', 3),
  (4, 'Prof. Jennifer Davis', 4),
  (5, 'Dr. Matthew Evans', 5);
