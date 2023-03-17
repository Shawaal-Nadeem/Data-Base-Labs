#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int numOfStudents = 2;
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
	ifstream fin;
	char headingArr[150];
	char studentArr1[150];
	char reg1[150];
	char firstName1[150];
	if (!fin)
	{
		cout << "File Not Found" << endl;
	}
	else
	{
		fin.open("StudentInfo.csv");
		int bug = 0;
		int bug1 = 0;
		while (!fin.eof())
		{
			fin.getline(headingArr,150);
			fin.getline(studentArr1, 100);
			for (int i = 0; studentArr1[i]!='\0'; i++)
			{
				if (studentArr1[i] != ',')
				{
					reg1[i] = studentArr1[i];
					bug++;
				}
				else
				{
					break;
				}
			}

			bug1 = bug + 1;
			for (int i = bug1; studentArr1[i] != '\0'; i++)
			{
				if (studentArr1[i] != ',')
				{
					firstName1[i] = studentArr1[i];
					bug1++;
				}
				else
				{
					break;
				}
			}
			/*cout << bug;
			cout << bug1;*/
			cout << studentArr1 << endl;
			reg1[bug] = '\0';
			firstName1[bug1] = '\0';
		}
		cout << reg1 << endl;
		cout << firstName1 << endl;
	}
	return 0;
}