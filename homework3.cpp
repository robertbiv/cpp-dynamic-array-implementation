//----------------------------------------------------------
//  Name: Robert Bennethum	
//  E-mail Address: rmb6287@psu.edu
//  Class: CMPSC 121
//  Project #homework 3
//  Due Date: October 8
//  Brief Project Description: Create a program that finds a birthday in 5 questions
//----------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	static int S1 = 1, S2 = 2, S3 = 4, S4 = 8, S5 = 16; //first digit of every set to add
	int date = 0; // running total which is date
	char ans; // response

	//find if birthday is in set
	cout << endl << "Is your birthday in Set1 ?\n 1  3  5  7\n 9 11 13 15\n17 19 21 23\n25 27 29 31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> ans;

	if (ans == 'y' || ans == 'Y') //find if birthday is in set
		date += S1; // if in set; add to date number

	cout << endl << "Is your birthday in Set2 ?\n 2  3  6  7\n10 11 14 15\n18 19 22 23\n26 27 30 31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> ans;

	if (ans == 'y' || ans == 'Y')//find if birthday is in set
		date += S2;// if in set; add to date number

	cout << endl << "Is your birthday in Set3?\n4   5  6  7\n12 13 14 15\n20 21 22 23\n28 29 30 31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> ans;

	if (ans == 'y' || ans == 'Y')//find if birthday is in set
		date += S3;// if in set; add to date number

	cout << endl << "Is your birthday in Set4?\n8   9 10 11\n12 13 14 15\n24 25 26 27\n28 29 30 31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> ans;

	if (ans == 'y' || ans == 'Y')//find if birthday is in set
		date += S4;// if in set; add to date number

	cout << endl << "Is your birthday in Set5 ?\n16 17 18 19\n20 21 22 23\n24 25 26 27\n28 29 30 31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> ans;

	if (ans == 'y' || ans == 'Y')//find if birthday is in set
		date += S5;// if in set; add to date number

	//Check if vaild date and display
	if (date == 0)
		cout << endl << "You didn't say yes to any options." << endl; //Error if every option responded with n or N
	else
		cout << endl << "The day of your birthday is " << date << "." << endl; //display date
}