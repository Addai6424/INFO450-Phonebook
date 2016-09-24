// Assignment 2(INFO 450).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int maxcontacts = 10;

void addentry(char myArray[10][2][50]);
void display(char myArray[10][2][50], int numEntered);
void duplicatecheck(char myArray[10][2][50], int numEntered);


int main()
{
	char pb[10][2][50];
	char response;
	int i = 0;

	cout << "--------------------------" << endl
		<< "What do you want to do" << endl
		<< "--------------------------" << endl
		<< "Enter A to add contact" << endl
		<< "Enter D to display contact" << endl
		<< "Enter Q to quit" << endl;
	cin >> response;
	cin.clear();
	cin.ignore();

	for (i = 0; i < 10 && (response != 'q' || response != 'Q'); i++)
	{
		if (response == 'a' || response == 'A')
		{
			addentry(pb);
		}
		else if (response == 'd' || response == 'D')
		{
			display(pb, i);
		}
		else
		{
			return 0;
		}

		cout << "--------------------------" << endl
			<< "What do you want to do" << endl
			<< "--------------------------" << endl
			<< "Enter A to add contact" << endl
			<< "Enter D to display contact" << endl
			<< "Enter Q to quit" << endl;
		cin >> response;
		cin.clear();
		cin.ignore();

	}
	return 0;
}
void addentry(char myArray[10][2][50])
{
	static int i = 0;
	cout << "Please enter name" << endl;
	gets_s(myArray[i][0]);  
	cout << "please enter number" << endl;
	gets_s(myArray[i][1]);
    
	i++;
}
void display(char myArray[10][2][50], int numEntered)
{
	int i;
	cout << "List of contacts" << endl;
	for (i = 0; i < numEntered; i++)
	{
		cout <<"Entry: " << myArray[i][0] << "\t";
		cout << myArray[i][1] << endl;
	}
}

void duplicatecheck(char myArray[10][2][50], int numEntered)
{
	int i;
	int j;
	for (i = 0; i < numEntered; i++)
	{
		for (j = i + 1; j < numEntered; j++)
			if (myArray[i][0] == myArray[j][0])
			{
				cout << "You have entered a duplicate";
			}
			else if (myArray[i][0] != myArray[j][0])
			{
				cout << "continue" << endl;
				gets_s(myArray[i][1]);
			}
	}
}





