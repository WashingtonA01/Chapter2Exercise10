/*
Filename: Chapter2Exercise10.cpp
Title: Distance Per Tank of Gas
Programmer: Arianna Washington
Date: 06FEB2025
Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that
calculates the number of miles per gallon the car gets. Display the result on the screen.
*/

#include <iostream>
using namespace std;

int main()
{
	int gallons = 15;
	int miles = 375;
	int mpg = miles / gallons;

	cout << "How many gallons can the car hold? " << gallons << endl; 

	cout << "How many miles can it travel before needing to refuel? " << miles << endl;

	cout << "How many miles per gallon does this car get? " << mpg; 



}
