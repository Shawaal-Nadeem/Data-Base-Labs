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
	cout << endl;
}

void delete_display(char head[100],char stud1[100], char stud2[100], char stud3[100], char stud4[100])
{
	ofstream fout;
	fout.open("data.csv");
	fout << head << endl;
	fout << stud1 << endl;
	fout << stud2 << endl;
	fout << stud3 << endl;
	fout << stud4 << endl;
	fout.close();
	cout << endl;
	cout << "Your Info has been Deleted." << endl;

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
		cout << "Current Data " << endl;
		cout << endl;
		display(student1);
		cout << "Are you sure to Delete Info ? (Y/N y/n) : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			delete_display(headArr,student2,student3,student4,student5);
		}
		else
		{
			cout << "Your Info is not Delete." << endl;
		}
	}
	else if (length == temp2)
	{
		cout << "Current Data " << endl;
		cout << endl;
		display(student2);
		cout << "Are you sure to Delete Info ? (Y/N y/n) : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			delete_display(headArr, student1, student3, student4, student5);
		}
		else
		{
			cout << "Your Info is not Delete." << endl;
		}
	}
	else if (length == temp3)
	{
		cout << "Current Data " << endl;
		cout << endl;
		display(student3);
		cout << "Are you sure to Delete Info ? (Y/N y/n) : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			delete_display(headArr, student1, student2, student4, student5);
		}
		else
		{
			cout << "Your Info is not Delete." << endl;
		}
	}
	else if (length == temp4)
	{
		cout << "Current Data " << endl;
		cout << endl;
		display(student4);
		cout << "Are you sure to Delete Info ? (Y/N y/n) : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			delete_display(headArr, student1, student2, student3, student5);
		}
		else
		{
			cout << "Your Info is not Delete." << endl;
		}
	}
	else if (length == temp5)
	{
		cout << "Current Data " << endl;
		cout << endl;
		display(student5);
		cout << "Are you sure to Delete Info ? (Y/N y/n) : ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			delete_display(headArr, student1, student2, student3, student4);
		}
		else
		{
			cout << "Your Info is not Delete." << endl;
		}
	}

	else
	{
		cout << "Not Exist" << endl;
		cout << endl;
	}

	return 0;
}