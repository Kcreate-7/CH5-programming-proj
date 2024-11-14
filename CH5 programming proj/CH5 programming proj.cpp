// CH5 programming proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
 
	int startPop, days, std; // startPop is the initial user input value. days is the number of days since start.
	double popGrowth, popSize, gP, growth; /*popGrowth variable is the growth % (uses gP / 100 to get the value).
	                                popSize is the final output of the total population size. gP is the 
									user input value*/

	

	cout << "Hi, welcome to the population calculator!" << endl;

	cout << "\n";

	cout << "Please enter the starting size of the population." << endl;

	cout << "\n";

	cin >> startPop;

	if(startPop < 2)
	{
		cout << "Get real, no mitosis here! Enter a number greater than 2.\n";
	}

	cout << "\n";

	cout << "Awesome! What is the rate of growth?" << endl;

	cout << "\n";

	cin >> gP;

	if (gP < 0)
	{ cout << "Your people are doomed to extinction. Enter a value greater than 0. \n";
	}

	cout << "\n";

	cout << "Wow, Genghis would be impressed!" << endl;

	cout << "\n";

	cout << "How many days from now are you looking to predict?" << endl;

	cout << "\n";

	cin >> days;

	cout << "\n";

	if (days < 1)
	{
		cout << "I can see into the future bro, give me a challenge. Enter a number greater than 1. \n";
	}
	
	popGrowth = gP / 100; // to get the % rate per day

	int i = days;

	for (i = 1; i <= days; i++)
	{
		growth = (startPop * popGrowth) * i; // Amount of population growth per day
		popSize = startPop + growth; // To get the total population size, growth added to the initial user input value

		cout << "On day " << i << " the population will have " << popSize << " nematodes.\n \n";
	}
	
	

	






}

/*Project 1. Population
Write a program that will predict the size of a population of organisms. The program should ask
the user for the starting number of organisms, their average daily population increase (as a
percentage), and the number of days they will multiply. A loop should display the size of the
population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population. Do
not accept a negative number for average daily population increase. Do not accept a number
less than 1 for the number of days they will multiply.*/