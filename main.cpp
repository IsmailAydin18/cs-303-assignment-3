#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include "Header.h"
using namespace std;

int main()
{
	map<string, string> stateDataMap;
	string statename;
	int choice;
	//asks the user to either choose 1,2 or 3 
	cout << "Please choose 1 to print out the list, print 2 to change capital of California and choose 3 to output capital name" << endl;
	cin >> choice;

	//the following elments are inserted into the map container
	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	//while everything is true
	while (true) 
	{
		//the first choice prints out the elements inside the map container
		if (choice == 1)
		{
			printmap(stateDataMap);
			//asks the user too choose a option since its on a while loop
			cout << "Please choose 1 to print out the list, choose 2 to change capital of California and choose 3 to output capital name" << endl;
			cin >> choice;
		}
		//the second choice changes california's capital from sacramento los angeles
		else if (choice==2) 
		{
			stateDataMap["California"] = "Los Angeles";
			//then prints out the elemetns again to show it has changed
			printmap(stateDataMap);
			//asks the user too choose a option since its on a while loop
			cout << "Please choose 1 to print out the list, choose 2 to change capital of California and choose 3 to output capital name" << endl;
			cin >> choice;
		}
		//the third choice asks the user for a state name that is already in the map, and then prints out the capital of that state
		else if (choice == 3) 
		{
			printcapitalname(stateDataMap, statename);
			//asks the user too choose a option since its on a while loop
			cout << "Please choose 1 to print out the list, choose 2 to change capital of California and choose 3 to output capital name" << endl;
			cin >> choice;
		}
		//if its anything else other than 1 2 or 3, then the while loop breaks and ends the program.
		else 
		{
			break;
		}
	}
}