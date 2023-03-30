#include<iostream>
#include<fstream>
using namespace std;

int comparison(char inp[20],char stud[100])
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

int main()
{
	ofstream fout;
	fout.open("data.csv");
	fout << "Registration Number , Name , Program , CGPA" << endl;
	fout << "L1F17BSCS0324,Amna Zafar,BBA,2.3,0231891234 " << endl;
	fout << "L1F20BBA0244,Ali Aijaz,SE,3.0,0543891234" << endl;
	fout << "L1F10SE6424,Alex Newton,BSCS,2.7,02318914524" << endl;
	fout << "L1F15BBA3324,Yaqoob Ali,BBA,4.0,0123891234" << endl;
	fout << "L1F12BSCS012,Amna Ali,BBA,2.7,0241892434" << endl;
	fout.close();
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
	if (length == temp1)
	{
		display(student1);
	}
	else if (length == temp2)
	{
		display(student2);
	}
	else if (length == temp3)
	{
		display(student3);
	}
	else if (length == temp4)
	{
		display(student4);
	}
	else if (length == temp5)
	{
		display(student5);
	}
	else
	{
		cout << "Not Exist" << endl;
		cout << endl;
	}

	return 0;
}