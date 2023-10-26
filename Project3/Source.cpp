#include<iostream>
#include<string>
using namespace std;
int main()
{
	string students;

	char choice;
	
		do
		{
		string currentstudent;

		cout << "Enter student name:" << endl;
		getline(cin, currentstudent);
		cin.ignore();
		students.append(currentstudent);
		students.append("\n");

		cout << "\nYou wanna continue \npress 'y': ";
		cin >> choice;
		cin.ignore();
		
		}
		while (choice == 'y' || choice == 'Y');

   cout << "\n\n-:List of students:-" << endl<< students;
return 0;
}