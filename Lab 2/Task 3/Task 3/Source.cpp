#include<iostream>
#include<fstream>
using namespace std;

int comparison(char inp[20], char stud[100])
{
	int temp = 0;
	for (int i = 0; stud[i] != ','; i++)     // Comparison
	{
		if (inp[i] == stud[i])
		{
			temp++;
		}
	}
	return temp;
}
void display(char stud[100])
{
	for (int i = 0; stud[i] != '\0'; i++)
	{
		if (stud[i] == ',')
		{
			cout << endl;
		}
		else
		{
			cout << stud[i];
		}
	}
	cout << endl;
}

void update_display(char stud[100])
{
	char cgpa[10];
	cout << "Enter CGPA you want to Update : ";
	cin>>cgpa;
	int regLen = 0;
	for (int i = 0; stud[i] != ',';i++)
	{
		regLen++;
	}
	int nameLen = regLen+1;
	cout << "temp" << endl;
	for (int i = nameLen; stud[i] != ','; i++)
	{
		nameLen++;
	}
	int progLen = nameLen+1;
	for (int i = progLen; stud[i] != ','; i++)
	{
		progLen++;
	}
	int cgpaLen = progLen + 1;
	int start = 0;
	for (int i = cgpaLen; stud[i] != ','; i++)
	{
		stud[i] = cgpa[start];
		start++;
	}

	for (int i = 0; stud[i] != '\0'; i++)
	{
		cout << stud[i];
	}
}

int main()
{
	char headArr[100];
	char student1[100];
	char student2[100];
	char student3[100];
	char student4[100];
	char student5[100];

	ifstream fin;
	fin.open("data.csv");
	if (!fin)
	{
		cout << "File not Found" << endl;
	}

	else
	{
		fin.getline(headArr, 100);
		fin.getline(student1, 100);
		fin.getline(student2, 100);
		fin.getline(student3, 100);
		fin.getline(student4, 100);
		fin.getline(student5, 100);
	}
	fin.close();

	char input[20];
	cout << "Enter Registration Number : ";
	cin.getline(input, 20);
	cout << endl;
	int length = 0;
	for (int i = 0; input[i] != '\0'; i++)    // Calculate length of user input
	{
		length++;
	}

	int temp1 = comparison(input, student1);
	int temp2 = comparison(input, student2);
	int temp3 = comparison(input, student3);
	int temp4 = comparison(input, student4);
	int temp5 = comparison(input, student5);
	char choice;
	if (length == temp1)
	{
		cout << "Previous Data " << endl;
		cout << endl;
		display(student1);
		cout << "Do you want to Update CGPA : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			update_display(student1);
		}
	}
	else if (length == temp2)
	{
		cout << "Previous Data " << endl;
		cout << endl;
		display(student2);
	}
	else if (length == temp3)
	{
		cout << "Previous Data " << endl;
		cout << endl;
		display(student3);
	}
	else if (length == temp4)
	{
		cout << "Previous Data " << endl;
		cout << endl;
		display(student4);
	}
	else if (length == temp5)
	{
		cout << "Previous Data " << endl;
		cout << endl;
		display(student5);
	}
	else
	{
		cout << "Not Exist" << endl;
		cout << endl;
	}



	return 0;
}