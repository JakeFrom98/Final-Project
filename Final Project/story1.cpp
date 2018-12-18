#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

extern int sanity; // Gives access to global variable in main

void story1() // First story function
{
	string answer; // String variable
	system("cls");
	cout << "You start off by waking up on the floor with your head pounding you cant see anything but a vile.\n";
	cout << "You can see that the vile says sanity potion, would you like to drink the sanity potion? y/n\n";
	cin >> answer; // Stores response in a variable

	if (answer == "y" || answer == "Y") // If Y don't take away sanity
	{
		system("cls");
		cout << "You drink the sanity potion bringing your sanity to " << sanity << " which is the normal level." << endl;
		system("pause");
		system("cls");
		cout << "You can now see and your head is no longer pounding.\n";
		cout << "You have no idea where you are the room is very dark you have to get out of this building before you lose your sanity.\n";
		system("pause");
		system("cls");
	}
	else if (answer == "n" || answer == "N") // If N equals take away sanity
	{
		--sanity;
		--sanity;
		--sanity;
		system("cls");
	}
}