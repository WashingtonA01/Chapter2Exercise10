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
	double gallons , miles;
	

	cout << "How many gallons can your car hold? " << endl; 
	cin >> gallons;

	cout << "How many miles can it travel before needing to refuel? " << endl;
	cin >> miles;

	double mpg = miles / gallons;

	cout << "Your car gets this many gallons per mile: " << mpg; 



}
