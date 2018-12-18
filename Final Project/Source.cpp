#include <string>
#include <iostream>
#include <cstdlib>
#include "story1.h"
#include "story2.h"
#include "story3.h"

using namespace std;

void passByReference(string *x);

// Global Variables
int win = 0;
int sanity = 3;
int amount_of_sanity_potion = 0;

class Insanity
{
public:
	void setName(string x)
	{
		name = x;
	}

	string getName()
	{
		return name;
	}

	void sanity_explination()
	{
		cout << "In this game you will have something called sanity." << endl <<"If your sanity is ever low you may have a hard time looking around to find things and you could die!" << endl;
	}

private:
	string name;
};

int main() // Main function
{
	string pointer = "12/20/2018";

	passByReference(&pointer);

	Insanity name;
	name.setName("Jacob Silva");

	cout << "This program was created for a C++ final the creator of this program is " << name.getName() << "." << endl;
	cout << "The date of completion for the assignment is " << pointer << "." << endl;
	system("pause");
	system("cls");

	string player_name; // Stores player name into a string
	cout << "Hello! What is your name? " << endl;
	cin >> player_name;

rerun:
	system("cls");
	cout << "Welcome " << player_name << " to Insanity!" << endl;
	system("pause");
	system("cls");
	cout << "Insanity is a text based horror game.\n";
	system("cls");

	Insanity Insanity;
	Insanity.sanity_explination();
	system("pause");
	system("cls");
	cout << "Good luck and don't die!\n";
	system("pause");
	story1(); // Call story1 function

	if (sanity > 0) // Check to make sure player has sanity before continuing to story function 2
	{
		story2(); // Go to story function 2
	}

	if (sanity > 0) // Check to make sure player has sanity before continuing to story function 3
	{
		story3(); // Go to story function 2
	}

	if (sanity <= 0) // if sanity is less than or equal to 0 tell user they died
	{
		string answer; // Stores player name in a string
		system("cls");
		cout << "Your sanity reached 0" << " you died!\n";
		cout << "Would you like to try again? y/n\n";
		cin >> answer;

		if (answer == "y" || answer == "Y") // If user input y rerun code
		{
			system("cls");
			++sanity; // Add one to sanity 
			++sanity; // Add one to sanity 
			++sanity; // Add one to sanity 
			goto rerun; // Go to rerun
		}
		else if (answer == "n" || answer == "N") // if user inputs n quite game
		{
			system("cls");
			cout << "Thank you for playing " << player_name << endl;
			cout << "\nPress enter to quit the game.\n";
			exit(0); // closes application
		}
	}

	if (win == 1) // if win variable = 1 congratulate the user on winning the game
	{
		system("cls");
		cout << "Congratulations " << player_name << " you won the game!";
		cout << "\nPress enter to quit the game.\n";
		system("pause");
		exit(0); // closes application
	}
}

void passByReference(string *x)
{
	*x= "12/18/2018";
}