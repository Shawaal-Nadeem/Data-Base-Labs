#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char reg[50];
	char name[50];
	char prog[50];
	double cgpa;
	char phNo[50];
	cout << "Enter New Student Detail" << endl;
	cout << endl;
	cout << "Enter Student Registration Number : ";
	cin.ignore();
	cin.getline(reg, 50);
	cout << "Enter Student Name : ";
	cin.ignore();
	cin.getline(name, 50);
	cout << "Enter Program : ";
	cin.ignore();
	cin.getline(prog, 50);
	cout << "Enter CGPA of Student : ";
	cin.ignore();
	cin >> cgpa;
	cout << "Enter Contact Number of Student : ";
	cin.ignore();
	cin.getline(phNo, 50);
	cout << endl;
	cout << endl;
	cout << "Student Information is Stored" << endl;
	ofstream fout;
	fout.open("data.csv", ios::app);
	fout << reg << "," << name << "," << prog << "," << cgpa << "," << phNo << endl;

	return 0;
}