#include<iostream>
#include<string>
#include <queue>
#include "Header.h"
using namespace std;

bool palindromefinder(string text, string text2)
{
	//the text that the user inserts is made equal to the text2 because we dont want the first string to change, since text is the control of the comparison
	text2 = text;
	//compare is made empty so that we can save the reverse of the string inserted by the user
	string compare = "";
	
	//if compare, which will be the string used to compare the two words to see if its palindrome, is empty
	if (compare == "")
	{
		//then using for loop we will reverse save the text inserted by the user to the compare string
		//we use text2 instead of text beacuse we dont want to change text, so we have to use another string to change
		for (int i = text2.length() - 1; i < text2.length(); i--) {
			compare = compare + text2[i];
		}
		//then if compare and text are equal, it will return true
		if (compare == text) 
		{
			return true;
		}
		//if they are not equal it will return false
		else
		{
			return false;
		}
	}
	
	
}