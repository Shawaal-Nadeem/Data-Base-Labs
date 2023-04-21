-- Question 1
show databases;
create database Hospital;
create table Patient(
	PatientID varchar (15) primary key,
	PatientName varchar (15),
	Age int,
	Gender varchar(5),
    Address varchar(20),
	Disease varchar(10),
	DoctorID varchar(15)
);
describe Patient;

-- Question 2
alter table Patient
modify Gender char(5);

-- Question 3
create table Doctor(
	DoctorID varchar (15) primary key,
	DoctorName varchar (15),
	Age int,
	Gender char,
	Address varchar(20)
);
describe Doctor;

-- Question 4
alter table Doctor
add column DoctorWard varchar(15);

-- Question 5
alter table Patient
add constraint foreign key (DoctorID) references Doctor(DoctorID);

-- Question 6
create table Lab(
	LabID varchar (15) primary key,
	TestDate date,
	TestAmount varchar(20),
	PatientID varchar(15),
	DoctorID varchar(15)
);
describe Lab;

-- Question 7
alter table Lab
add constraint foreign key(DoctorID) references Doctor(DoctorID);

-- Question 8
alter table Lab
add constraint foreign key (PatientID) references Patient(PatientID);

-- Question 9
alter table Lab
Rename COLUMN TestAmount to Amount;

-- Question 10
alter table Lab
modify column TestAmount double;

-- Question 11
alter table Lab
add column LabNo varchar(10);

-- Question 12
create table HospitalRoom(
	RoomID varchar (15) primary key,
	RoomAllocationDate date,
	RoomType varchar(20),
	RoomStatus varchar(5)
);
describe HospitalRoom;

-- Question 13
create table PatientBill(
	BillID varchar (15) primary key,
	BillDate date,
	Amount varchar(20),
	PatientID varchar(15)
);
describe PatientBill;

-- Question 14
alter table PatientBill
add constraint foreign key(PatientID) references Patient(PatientID);

-- Question 15
rename table HospitalRoom to Room;
describe Room;