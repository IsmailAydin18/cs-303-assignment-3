#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include "Header.h"
using namespace std;

int main()
{
	string text;
	//asks the user to enter a word
	cout << "Enter a text to test if its palindrome." << endl;
	getline(cin,text);
	
	string text2;
	
	while (true) 
	{
		//test if the entered word by the user is palindrome
		if (palindromefinder(text, text2)) {
			//if the word is a palindrome, then it will give the message is palindrome and end the program
			cout << "palindrome" << endl;
			break;
		}
		else {
			//if the word is not palindrome, then it will return false or give the message not palindrome
			cout << "not a palindrome" << endl;
			//ask the user for another string to enter
			cout << "Enter a text to test if its palindrome." << endl;
			getline(cin, text);
		}
	}

	return 0;
}