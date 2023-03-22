#include<iostream>
#include<fstream>
using namespace std;
	



int main()
{
	ofstream fout;
	fout.open("Employee.csv");
	fout << "Emp ID" << "," << " Emp Name" << "," << "Emp Joining Date" << "," << "Dept ID" << "," << "Contact" << "," << " Salary" << "," << " Marital Status" << endl;
	fout << "001" << "," << "Imran" << "," << "15/07/2012" << "," << "1" << "," << "03331222567" << "," << "78000" << "," << "Married" << endl;
	fout << "002" << "," << "Saleem" << "," << "15/07/2012" << "," << "1" << "," << "03331233567" << "," << "160000" << "," << "Married" << endl;
	fout << "003" << "," << "Aziz" << "," << "15/10/2011" << "," << "1" << "," << "03331234557" << "," << "74000" << "," << "Married" << endl;
	fout << "004" << "," << "Jem Morison" << "," << "15/08/2012" << "," << "5" << "," << "03331244567" << "," << "78000" << "," << "Married" << endl;
	fout << "005" << "," << "Junaid" << "," << "15/07/2013" << "," << "3" << "," << "033311234568" << "," << "79000" << "," << "Married" << endl;
	fout << "006" << "," << "Jamshed" << "," << "15/01/2013" << "," << "4" << "," << "03338479567" << "," << "45000" << "," << "Single" << endl;
	fout << "007" << "," << "Asim" << "," << "01/01/2011" << "," << "1" << "," << "033312225" << "," << "69000" << "," << "Single" << endl;
	fout << "008" << "," << "Javeria" << "," << "02/07/2010" << "," << "2" << "," << "03335622567" << "," << "145000" << "," << "Single" << endl;
	fout << "009" << "," << "Zara" << "," << "02/01/2011" << "," << "4" << "," << "03331901267" << "," << "79000" << "," << "Single" << endl;
	fout.close();

	ifstream fin;
	char headingArr[200];
	int emp_id1;
	int emp_id2;
	int emp_id3;
	int emp_id4;
	int emp_id5;
	int emp_id6;
	int emp_id7;
	int emp_id8;
	int emp_id9;

	char name1[50];
	char name2[50];
	char name3[50];
	char name4[50];
	char name5[50];
	char name6[50];
	char name7[50];
	char name8[50];
	char name9[50];

	char joinDate1[50];
	char joinDate2[50];
	char joinDate3[50];
	char joinDate4[50];
	char joinDate5[50];
	char joinDate6[50];
	char joinDate7[50];
	char joinDate8[50];
	char joinDate9[50];

	int deptId1;
	int deptId2;
	int deptId3;
	int deptId4;
	int deptId5;
	int deptId6;
	int deptId7;
	int deptId8;
	int deptId9;

	char phNo1[50];
	char phNo2[50];
	char phNo3[50];
	char phNo4[50];
	char phNo5[50];
	char phNo6[50];
	char phNo7[50];
	char phNo8[50];
	char phNo9[50];

	int salary1;
	int salary2;
	int salary3;
	int salary4;
	int salary5;
	int salary6;
	int salary7;
	int salary8;
	int salary9;

	char marital_status1[50];
	char marital_status2[50];
	char marital_status3[50];
	char marital_status4[50];
	char marital_status5[50];
	char marital_status6[50];
	char marital_status7[50];
	char marital_status8[50];
	char marital_status9[50];

	fin.open("Employee.csv");
	if (!fin)
	{
		cout << "File Not Found" << endl;
	}
	else
	{
		fin.getline(headingArr, 200);
		fin >> emp_id1;
		fin.ignore();
		fin.getline(name1, 50, ',');
		fin.getline(joinDate1, 50, ',');
		fin >> deptId1;
		fin.ignore();
		fin.getline(phNo1, 50, ',');
		fin >> salary1;
		fin.ignore();
		fin.getline(marital_status1, 50, '\n');
		fin >> emp_id2;
		fin.ignore();
		fin.getline(name2, 50, ',');
		fin.getline(joinDate2, 50, ',');
		fin >> deptId2;
		fin.ignore();
		fin.getline(phNo2, 50, ',');
		fin >> salary2;
		fin.ignore();
		fin.getline(marital_status2, 50, '\n');
		fin >> emp_id3;
		fin.ignore();
		fin.getline(name3, 50, ',');
		fin.getline(joinDate3, 50, ',');
		fin >> deptId3;
		fin.ignore();
		fin.getline(phNo3, 50, ',');
		fin >> salary3;
		fin.ignore();
		fin.getline(marital_status3, 50, '\n');
		fin >> emp_id4;
		fin.ignore();
		fin.getline(name4, 50, ',');
		fin.getline(joinDate4, 50, ',');
		fin >> deptId4;
		fin.ignore();
		fin.getline(phNo4, 50, ',');
		fin >> salary4;
		fin.ignore();
		fin.getline(marital_status4, 50, '\n');
		fin >> emp_id5;
		fin.ignore();
		fin.getline(name5, 50, ',');
		fin.getline(joinDate5, 50, ',');
		fin >> deptId5;
		fin.ignore();
		fin.getline(phNo5, 50, ',');
		fin >> salary5;
		fin.ignore();
		fin.getline(marital_status5, 50, '\n');
		fin >> emp_id6;
		fin.ignore();
		fin.getline(name6, 50, ',');
		fin.getline(joinDate6, 50, ',');
		fin >> deptId6;
		fin.ignore();
		fin.getline(phNo6, 50, ',');
		fin >> salary6;
		fin.ignore();
		fin.getline(marital_status6, 50, '\n');
		fin >> emp_id7;
		fin.ignore();
		fin.getline(name7, 50, ',');
		fin.getline(joinDate7, 50, ',');
		fin >> deptId7;
		fin.ignore();
		fin.getline(phNo7, 50, ',');
		fin >> salary7;
		fin.ignore();
		fin.getline(marital_status7, 50, '\n');
		fin >> emp_id8;
		fin.ignore();
		fin.getline(name8, 50, ',');
		fin.getline(joinDate8, 50, ',');
		fin >> deptId8;
		fin.ignore();
		fin.getline(phNo8, 50, ',');
		fin >> salary8;
		fin.ignore();
		fin.getline(marital_status8, 50, '\n');
		fin >> emp_id9;
		fin.ignore();
		fin.getline(name9, 50, ',');
		fin.getline(joinDate9, 50, ',');
		fin >> deptId9;
		fin.ignore();
		fin.getline(phNo9, 50, ',');
		fin >> salary9;
		fin.ignore();
		fin.getline(marital_status9, 50, '\n');
	}
	cout << "Employee whose Salary is lowest" << endl;
	cout << endl;
	if (salary1 < salary2 && salary1 < salary3 &&salary1 < salary4 && salary1 < salary5 && salary1 < salary6 && salary1 < salary7 &&salary1 < salary8 && salary1 < salary9)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	else if (salary2 < salary1 && salary2 < salary3 &&salary2 < salary4 && salary2 < salary5 && salary2 < salary6 && salary2 < salary7 &&salary2 < salary8 && salary2 < salary9)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	else if (salary3 < salary1 && salary3 < salary2 &&salary3 < salary4 && salary3 < salary5 && salary3 < salary6 && salary3 < salary7 &&salary3 < salary8 && salary3 < salary9)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	else if (salary4 < salary1 && salary4 < salary2 &&salary4 < salary3 && salary4 < salary5 && salary4 < salary6 && salary4 < salary7 &&salary4 < salary8 && salary4 < salary9)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	else if (salary5 < salary1 && salary5 < salary2 &&salary5 < salary3 && salary5 < salary4 && salary5 < salary6 && salary5 < salary7 &&salary5 < salary8 && salary5 < salary9)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	else if (salary6 < salary1 && salary6 < salary2 &&salary6 < salary3 && salary6 < salary4 && salary6 < salary5 && salary6 < salary7 &&salary6 < salary8 && salary6 < salary9)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	else if (salary7 < salary1 && salary7 < salary2 &&salary7 < salary3 && salary7 < salary4 && salary7 < salary5 && salary7 < salary6 &&salary7 < salary8 && salary7 < salary9)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	else if (salary8 < salary1 && salary8 < salary2 &&salary8 < salary3 && salary8 < salary4 && salary8 < salary5 && salary8 < salary6 &&salary8 < salary7 && salary8 < salary9)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	else if (salary9 < salary1 && salary9 < salary2 &&salary9 < salary3 && salary9 < salary4 && salary9 < salary5 && salary9 < salary6 &&salary9 < salary7 && salary9 < salary8)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}

	cout << "Employee whose Salary is Highest" << endl;
	cout << endl;
	if (salary1 > salary2 && salary1 > salary3 &&salary1 > salary4 && salary1 > salary5 && salary1 > salary6 && salary1 > salary7 &&salary1 > salary8 && salary1 > salary9)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	else if (salary2 > salary1 && salary2 > salary3 &&salary2 > salary4 && salary2 > salary5 && salary2 > salary6 && salary2 > salary7 &&salary2 > salary8 && salary2 > salary9)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	else if (salary3 > salary1 && salary3 > salary2 &&salary3 > salary4 && salary3 > salary5 && salary3 > salary6 && salary3 > salary7 &&salary3 > salary8 && salary3 > salary9)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	else if (salary4 > salary1 && salary4 > salary2 &&salary4 > salary3 && salary4 > salary5 && salary4 > salary6 && salary4 > salary7 &&salary4 > salary8 && salary4 > salary9)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	else if (salary5 > salary1 && salary5 > salary2 &&salary5 > salary3 && salary5 > salary4 && salary5 > salary6 && salary5 > salary7 &&salary5 > salary8 && salary5 > salary9)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	else if (salary6 > salary1 && salary6 > salary2 &&salary6 > salary3 && salary6 > salary4 && salary6 > salary5 && salary6 > salary7 &&salary6 > salary8 && salary6 > salary9)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	else if (salary7 > salary1 && salary7 > salary2 &&salary7 > salary3 && salary7 > salary4 && salary7 > salary5 && salary7 > salary6 &&salary7 > salary8 && salary7 > salary9)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	else if (salary8 > salary1 && salary8 > salary2 &&salary8 > salary3 && salary8 > salary4 && salary8 > salary5 && salary8 > salary6 &&salary8 > salary7 && salary8 > salary9)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	else if (salary9 > salary1 && salary9 > salary2 &&salary9 > salary3 && salary9 > salary4 && salary9 > salary5 && salary9 > salary6 &&salary9 > salary7 && salary9 > salary8)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}
		int count[9] = { 0 };
	char mar[7] = { 'M', 'a', 'r', 'r', 'i', 'e', 'd' };
	for (int i = 0; marital_status1[i] != '\0'; i++)
	{
		if (mar[i] == marital_status1[i])
		{
			count[0]++;
		}
	}
	for (int i = 0; marital_status2[i] != '\0'; i++)
	{
		if (mar[i] == marital_status2[i])
		{
			count[1]++;
		}
	}
	for (int i = 0; marital_status3[i] != '\0'; i++)
	{
		if (mar[i] == marital_status3[i])
		{
			count[2]++;
		}
	}
	for (int i = 0; marital_status4[i] != '\0'; i++)
	{
		if (mar[i] == marital_status4[i])
		{
			count[3]++;
		}
	}
	for (int i = 0; marital_status5[i] != '\0'; i++)
	{
		if (mar[i] == marital_status5[i])
		{
			count[4]++;
		}
	}

	for (int i = 0; marital_status6[i] != '\0'; i++)
	{
		if (mar[i] == marital_status6[i])
		{
			count[5]++;
		}
	}
	for (int i = 0; marital_status7[i] != '\0'; i++)
	{
		if (mar[i] == marital_status7[i])
		{
			count[6]++;
		}
	}
	for (int i = 0; marital_status8[i] != '\0'; i++)
	{
		if (mar[i] == marital_status8[i])
		{
			count[7]++;
		}
	}
	for (int i = 0; marital_status9[i] != '\0'; i++)
	{
		if (mar[i] == marital_status9[i])
		{
			count[8]++;
		}
	}
	cout << "Employees who Married  " << endl;
	cout << endl;
	if (count[0] == 7)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	if (count[1] == 7)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	if (count[2] == 7)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	if (count[3] == 7)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	if (count[4] == 7)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	if (count[5] == 7)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	if (count[6] == 7)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	if (count[7] == 7)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	if (count[8] == 7)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}

	int count1[9] = { 0 };
	char sin[6] = { 'S', 'i', 'n', 'g', 'l', 'e' };
	for (int i = 0; marital_status1[i] != '\0'; i++)
	{
		if (sin[i] == marital_status1[i])
		{
			count1[0]++;
		}
	}
	for (int i = 0; marital_status2[i] != '\0'; i++)
	{
		if (sin[i] == marital_status2[i])
		{
			count1[1]++;
		}
	}
	for (int i = 0; marital_status3[i] != '\0'; i++)
	{
		if (sin[i] == marital_status3[i])
		{
			count1[2]++;
		}
	}
	for (int i = 0; marital_status4[i] != '\0'; i++)
	{
		if (sin[i] == marital_status4[i])
		{
			count1[3]++;
		}
	}
	for (int i = 0; marital_status5[i] != '\0'; i++)
	{
		if (sin[i] == marital_status5[i])
		{
			count1[4]++;
		}
	}

	for (int i = 0; marital_status6[i] != '\0'; i++)
	{
		if (sin[i] == marital_status6[i])
		{
			count1[5]++;
		}
	}
	for (int i = 0; marital_status7[i] != '\0'; i++)
	{
		if (sin[i] == marital_status7[i])
		{
			count1[6]++;
		}
	}
	for (int i = 0; marital_status8[i] != '\0'; i++)
	{
		if (sin[i] == marital_status8[i])
		{
			count1[7]++;
		}
	}
	for (int i = 0; marital_status9[i] != '\0'; i++)
	{
		if (sin[i] == marital_status9[i])
		{
			count1[8]++;
		}
	}
	cout << endl;
	cout << endl;
	cout << "Employees who Single  " << endl;
	cout << endl;
	if (count1[0] == 6)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	if (count1[1] == 6)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	if (count1[2] == 6)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	if (count1[3] == 6)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	if (count1[4] == 6)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	if (count1[5] == 6)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	if (count1[6] == 6)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	if (count1[7] == 6)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	if (count1[8] == 6)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}

	cout << endl;
	cout << endl;
	int total_salary;
	total_salary = salary1 + salary2 + salary3 + salary4 + salary5 + salary6 + salary7 + salary8 + salary9;
	double avg_salary;
	avg_salary = total_salary / 9;
	cout << "Average Salary of All Employees : " << avg_salary << endl;
	cout << endl;
	cout << endl;
	cout << "Employees whose Salary greater than Imran" << endl;
	cout << endl;
	if (salary2 > salary1)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	if (salary3 > salary1)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	if (salary4 > salary1)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	if (salary5 > salary1)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	if (salary6 > salary1)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	if (salary7 > salary1)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	if (salary8 > salary1)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	if (salary9 > salary1)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << "Employees whose Salary less than Aziz" << endl;
	cout << endl;
	if (salary1 < salary3)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	if (salary2 < salary3)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	if (salary4 < salary3)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	if (salary5 < salary3)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	if (salary6 < salary3)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	if (salary7 < salary3)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	if (salary8 < salary3)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	if (salary9 < salary3)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;
	char name[10];
	cout << "Enter Employee Name you wanna display information : ";
	cin.getline(name, 10);
	cout << endl;
	int length_of_student_name[9] = { 0 };
	int length_of_user_name = 0;
	for (int i = 0; name[i] != 0; i++)
	{
			length_of_user_name++;
	}
	
	for (int i = 0; name1[i] != '\0'; i++)
	{
		if (name[i] == name1[i])
		{
			length_of_student_name[0]++;
		}
	}
	for (int i = 0; name2[i] != '\0'; i++)
	{
		if (name[i] == name2[i])
		{
			length_of_student_name[1]++;
		}
	}
	for (int i = 0; name3[i] != '\0'; i++)
	{
		if (name[i] == name3[i])
		{
			length_of_student_name[2]++;
		}
	}
	for (int i = 0; name4[i] != '\0'; i++)
	{
		if (name[i] == name4[i])
		{
			length_of_student_name[3]++;
		}
	}
	for (int i = 0; name5[i] != '\0'; i++)
	{
		if (name[i] == name5[i])
		{
			length_of_student_name[4]++;

		}
	}
	for (int i = 0; name6[i] != '\0'; i++)
	{
		if (name[i] == name6[i])
		{
			length_of_student_name[5]++;
		}
	}
	for (int i = 0; name7[i] != '\0'; i++)
	{
		if (name[i] == name7[i])
		{
			length_of_student_name[6]++;
		}
	}
	for (int i = 0; name8[i] != '\0'; i++)
	{
		if (name[i] == name8[i])
		{
			length_of_student_name[7]++;
		}
	}
	for (int i = 0; name9[i] != '\0'; i++)
	{
		if (name[i] == name9[i])
		{
			length_of_student_name[8]++;
		}
	}

	if (length_of_student_name[0] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id1 << endl;
		cout << "Employee Name : " << name1 << endl;
		cout << "Employee Joining Date : " << joinDate1 << endl;
		cout << "Department ID : " << deptId1 << endl;
		cout << "Contact no : " << phNo1 << endl;
		cout << "Salary : " << salary1 << endl;
		cout << "Marital Status : " << marital_status1 << endl;
		cout << endl;
	}
	if (length_of_student_name[1] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id2 << endl;
		cout << "Employee Name : " << name2 << endl;
		cout << "Employee Joining Date : " << joinDate2 << endl;
		cout << "Department ID : " << deptId2 << endl;
		cout << "Contact no : " << phNo2 << endl;
		cout << "Salary : " << salary2 << endl;
		cout << "Marital Status : " << marital_status2 << endl;
		cout << endl;
	}
	if (length_of_student_name[2] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id3 << endl;
		cout << "Employee Name : " << name3 << endl;
		cout << "Employee Joining Date : " << joinDate3 << endl;
		cout << "Department ID : " << deptId3 << endl;
		cout << "Contact no : " << phNo3 << endl;
		cout << "Salary : " << salary3 << endl;
		cout << "Marital Status : " << marital_status3 << endl;
		cout << endl;
	}
	if (length_of_student_name[3] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id4 << endl;
		cout << "Employee Name : " << name4 << endl;
		cout << "Employee Joining Date : " << joinDate4 << endl;
		cout << "Department ID : " << deptId4 << endl;
		cout << "Contact no : " << phNo4 << endl;
		cout << "Salary : " << salary4 << endl;
		cout << "Marital Status : " << marital_status4 << endl;
		cout << endl;
	}
	if (length_of_student_name[4] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id5 << endl;
		cout << "Employee Name : " << name5 << endl;
		cout << "Employee Joining Date : " << joinDate5 << endl;
		cout << "Department ID : " << deptId5 << endl;
		cout << "Contact no : " << phNo5 << endl;
		cout << "Salary : " << salary5 << endl;
		cout << "Marital Status : " << marital_status5 << endl;
		cout << endl;
	}
	if (length_of_student_name[5] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id6 << endl;
		cout << "Employee Name : " << name6 << endl;
		cout << "Employee Joining Date : " << joinDate6 << endl;
		cout << "Department ID : " << deptId6 << endl;
		cout << "Contact no : " << phNo6 << endl;
		cout << "Salary : " << salary6 << endl;
		cout << "Marital Status : " << marital_status6 << endl;
		cout << endl;
	}
	if (length_of_student_name[6] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id7 << endl;
		cout << "Employee Name : " << name7 << endl;
		cout << "Employee Joining Date : " << joinDate7 << endl;
		cout << "Department ID : " << deptId7 << endl;
		cout << "Contact no : " << phNo7 << endl;
		cout << "Salary : " << salary7 << endl;
		cout << "Marital Status : " << marital_status7 << endl;
		cout << endl;
	}
	if (length_of_student_name[7] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id8 << endl;
		cout << "Employee Name : " << name8 << endl;
		cout << "Employee Joining Date : " << joinDate8 << endl;
		cout << "Department ID : " << deptId8 << endl;
		cout << "Contact no : " << phNo8 << endl;
		cout << "Salary : " << salary8 << endl;
		cout << "Marital Status : " << marital_status8 << endl;
		cout << endl;
	}
	if (length_of_student_name[8] == length_of_user_name)
	{
		cout << "Employee ID : " << emp_id9 << endl;
		cout << "Employee Name : " << name9 << endl;
		cout << "Employee Joining Date : " << joinDate9 << endl;
		cout << "Department ID : " << deptId9 << endl;
		cout << "Contact no : " << phNo9 << endl;
		cout << "Salary : " << salary9 << endl;
		cout << "Marital Status : " << marital_status9 << endl;
		cout << endl;
	}


	return 0;
}

