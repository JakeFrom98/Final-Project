#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

extern int amount_of_sanity_potion; // Gives access to global variable in main
extern int map; // Gives access to global variable in main

void story2() // Second story function
{
	// Variables
	int i = 2;
	int m = 0;
	int l_r = 1;

	// References 
	int& items = i;
	int& map = m;
	int& leave_room = l_r;

	cout << "Now that your sanity is back to normal you look around the room and see a few things.\n";

	while (items != 0) // while times doesn't equal 0
	{
		cout << "You see another vile that says sanity potion, what looks like to be a map, and a door.\n";
		cout << "What would you like to do? \n";

		string answer; // String variable
		getline(cin, answer); // Gets whole line

		if ((answer == "grab sanity potion" || answer == "Grab sanity potion") && (amount_of_sanity_potion < 1)) // Checks if user input equals string and if the variable amount_of_sanity_potion is < 1
		{
			cout << "You grabbed some sanity potion!\n";
			++amount_of_sanity_potion; // adds one to amount_of_sanity_potion variable
			--items; // minuses one from items
			system("pause");
			system("cls");
		}

		else if ((answer == "grab sanity potion" || answer == "Grab sanity potion") && amount_of_sanity_potion == 1) // Checks if the user input equals string and if the variable amount_of_sanity_potion equals one
		{
			cout << "You already grabbed the sanity potion!\n";
			system("pause");
			system("cls");
		}

		else if ((answer == "grab the map" || answer == "Grab the map") && map < 1) // checks if the user input equals string and if the variable map < 1
		{
			cout << "You grabbed a map!\n";
			cout << "The map tells you that there is only one room left and an exit.\n";
			--items; // adds one to items variables
			++map; // ads one to map variable
			system("pause");
			system("cls");
		}

		else if ((answer == "grab the map" || answer == "Grab the map") && map == 1) // checks if the user input equals string and if the variable map equals 1
		{
			cout << "You already grabbed a map!\n";
			system("pause");
			system("cls");
		}

		else if ((answer == "leave the room" || answer == "Leave the room") && leave_room == 0) // checks if the user input equals string and if the variable leave_room equals 0
		{
			cout << "You cant leave yet!\n";
			cout << "hint something to tell directions might be nice.\n";
			system("pause");
			system("cls");
		}

		else if ((answer == "leave the room" || answer == "Leave the room") && leave_room == 1) // checks if the user input equals string and if the variable leave_room equals 1
		{
			cout << "You cant leave yet!\n";
			cout << "Hint something to tell directions and to help with your sanity might be useful.\n";
			system("pause");
			system("cls");
		}

		else // If the user inputs an unknown string
		{
			cout << ("I'm sorry I didn't understand that...\n");
			system("pause");
			system("cls");
		}
	}
}