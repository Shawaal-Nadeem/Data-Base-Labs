#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char headingArr[150];
	char reg1[150];
	char firstName1[150];
	char lastName1[150];
	char prog1[150];
	double cgpa1;
	char phNo1[150];

	char reg2[150];
	char firstName2[150];
	char lastName2[150];
	char prog2[150];
	double cgpa2;
	char phNo2[150];

	char reg3[150];
	char firstName3[150];
	char lastName3[150];
	char prog3[150];
	double cgpa3;
	char phNo3[150];

	char reg4[150];
	char firstName4[150];
	char lastName4[150];
	char prog4[150];
	double cgpa4;
	char phNo4[150];

	char reg5[150];
	char firstName5[150];
	char lastName5[150];
	char prog5[150];
	double cgpa5;
	char phNo5[150];

	char reg6[150];
	char firstName6[150];
	char lastName6[150];
	char prog6[150];
	double cgpa6;
	char phNo6[150];
	ifstream fin;
	fin.open("StudentInfo.csv");
	if (!fin)
	{
		cout << "File Not Found" << endl;
	}
	else
	{

			fin.getline(headingArr, 150);                     //Ignore Heading
			//Data of Student 1
			fin.getline(reg1,150,',');
			fin.getline(firstName1, 150,',');
			fin.getline(lastName1, 150, ',');
			fin.getline(prog1, 150, ',');
			fin >> cgpa1;
			fin.getline(phNo1,150,'\n');
			//Data of Student 2
			fin.getline(reg2, 150, ',');
			fin.getline(firstName2, 150, ',');
			fin.getline(lastName2, 150, ',');
			fin.getline(prog2, 150, ',');
			fin >> cgpa2;
			fin.ignore();
			fin.getline(phNo2, 150, '\n');
			//Data of Student 3
			fin.getline(reg3, 150, ',');
			fin.getline(firstName3, 150, ',');
			fin.getline(lastName3, 150, ',');
			fin.getline(prog3, 150, ',');
			fin >> cgpa3;
			fin.ignore();
			fin.getline(phNo3, 150, '\n');
			//Data of Student 4
			fin.getline(reg4, 150, ',');
			fin.getline(firstName4, 150, ',');
			fin.getline(lastName4, 150, ',');
			fin.getline(prog4, 150, ',');
			fin >> cgpa4;
			fin.ignore();
			fin.getline(phNo4, 150, '\n');
			//Data of Student 5
			fin.getline(reg5, 150, ',');
			fin.getline(firstName5, 150, ',');
			fin.getline(lastName5, 150, ',');
			fin.getline(prog5, 150, ',');
			fin >> cgpa5;
			fin.ignore();
			fin.getline(phNo5, 150, '\n');
			//Data of Student 6
			fin.getline(reg6, 150, ',');
			fin.getline(firstName6, 150, ',');
			fin.getline(lastName6, 150, ',');
			fin.getline(prog6, 150, ',');
			fin >> cgpa6;
			fin.ignore();
			fin.getline(phNo6, 150, '\n');
			
			//Condition display whose cgpa >3.5
			cout << "Students whose CGPA is greater than 3.5" << endl;
			cout << endl;
			if (cgpa1>3.5)
			{
				cout <<"Registration Number : " <<reg1 << endl;
				cout <<"First Name : "<< firstName1 << endl;
				cout << "Last Name : "<<lastName1 << endl;
				cout << "Program : "<<prog1 << endl;
				cout << "CGPA : "<<cgpa1 << endl;
				cout << "Phone no : "<<phNo1 << endl;
				cout << endl;
			}
			 if (cgpa2 > 3.5)
			{
				 cout << "Registration Number : " << reg2 << endl;
				 cout << "First Name : " << firstName2 << endl;
				 cout << "Last Name : " << lastName2 << endl;
				 cout << "Program : " << prog2 << endl;
				 cout << "CGPA : " << cgpa2 << endl;
				 cout << "Phone no : " << phNo2 << endl;
				cout << endl;
			}
			 if (cgpa3 > 3.5)
			{
				 cout << "Registration Number : " << reg3 << endl;
				 cout << "First Name : " << firstName3 << endl;
				 cout << "Last Name : " << lastName3 << endl;
				 cout << "Program : " << prog3 << endl;
				 cout << "CGPA : " << cgpa3 << endl;
				 cout << "Phone no : " << phNo3 << endl;
				cout << endl;
			}
			if (cgpa4 > 3.5)
			{
				cout << "Registration Number : " << reg4 << endl;
				cout << "First Name : " << firstName4 << endl;
				cout << "Last Name : " << lastName4 << endl;
				cout << "Program : " << prog4 << endl;
				cout << "CGPA : " << cgpa4 << endl;
				cout << "Phone no : " << phNo4 << endl;
				cout << endl;
			}
		    if (cgpa5 > 3.5)
			{
				cout << "Registration Number : " << reg5 << endl;
				cout << "First Name : " << firstName5 << endl;
				cout << "Last Name : " << lastName5 << endl;
				cout << "Program : " << prog5 << endl;
				cout << "CGPA : " << cgpa5 << endl;
				cout << "Phone no : " << phNo5 << endl;
				cout << endl;
			}
		    if (cgpa6 > 3.5)
			{
				cout << "Registration Number : " << reg6 << endl;
				cout << "First Name : " << firstName6 << endl;
				cout << "Last Name : " << lastName6 << endl;
				cout << "Program : " << prog6 << endl;
				cout << "CGPA : " << cgpa6 << endl;
				cout << "Phone no : " << phNo6 << endl;
				cout << endl;
			}
			else
			{
				cout << "No one student has greater than 3.5 CGPA" << endl;
			}
			}
	return 0;
}

