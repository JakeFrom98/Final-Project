#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

extern int sanity; // Gives access to global variable in main
extern int win; // Gives access to global variable in main

void story3() { // Third Story Function

	int options = 0; // Variable for While loop

	while (options == 0) // While loop
	{
		cout << "Would you like to check the last room or go to the exit? ";

		string answer; // String variable

		getline(cin, answer); // Gets whole line
		if ((answer == "check the last room" || answer == "Check the last room")) // Checks users input and if user input equals string 
		{
			cout << "You got jumped and you lost your sanity causing you to die.\n";
			system("pause");
			--sanity; // minuses one from sanity
			--sanity; // minuses one from sanity
			--sanity; // minuses one from sanity
			++options; // adds one to sanity
		}

		else if ((answer == "Go to the exit" || answer == "go to the exit")) // Checks users input and if user input equals string
		{
			++options; // adds one to options
			++win; // adds one to win
		}

		else // if the user inputs anything else display this message
		{
			cout << ("I'm sorry I didn't understand that...\n");
			system("pause");
			system("cls");
		}
	}
}