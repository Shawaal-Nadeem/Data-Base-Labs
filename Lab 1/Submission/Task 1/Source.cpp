#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int numOfStudents = 6;
	char regNo[15];
	char firstName[15];
	char lastName[15];
	char prog[15];
	double cgpa;
	char phNo[15];
	ofstream fout;
	fout.open("StudentInfo.csv");
	fout << "Registration Number" << "," << "First Name" << "," << "Last Name" << "," << "Program" << "," << "CGPA" << "," << "Contact Number" << endl;
	for (int i = 0; i < numOfStudents; i++)
	{
		cout << "Details of Student "<<i + 1 << endl;
		cout << "Enter Registration Number : ";
		cin.ignore();
		cin.getline(regNo, 15);
		cout << endl;
		cout << "Enter First Name : ";
		cin.ignore();
		cin.getline(firstName, 15);
		cout << endl;
		cout << "Enter Last Name : ";
		cin.ignore();
		cin.getline(lastName, 15);
		cout << endl;
		cout << "Enter Program : ";
		cin.ignore();
		cin.getline(prog, 15);
		cout << endl;
		cout << "Enter  CGPA : ";
		cin.ignore();
		cin >> cgpa;
		cout << endl;
		cout << "Enter Contact Number : ";
		cin.ignore();
		cin.getline(phNo, 15);
		cout <<endl;
		fout << regNo << "," << firstName << "," << lastName << "," << prog << "," << cgpa << "," << phNo << endl;
	}
	fout.close();
	
	return 0;
}