#include<iostream>
#include<string>
#include <queue>
#include "Header.h"
#include <map>
using namespace std;

//this function prints out the elements in the map
void printmap(map<string, string> stateDataMap)
{
	//for the statment inside the for loop, after saying auto you can put any word you want, and then put the given map name
	//this way you can get all the information inside the map, and print out the items inisde map by saying first and second
	for (auto print : stateDataMap)
	{
		//by saying first and second, it prints out the pair, both state and the capital, but does it in a alphabetic order since its map.
		cout << print.first + " " + print.second << endl;
	}
}

//This function print out the capital of the state that the user inserts
void printcapitalname(map<string, string> stateDataMap, string statename)
{
	//asks the user for the state 
	cout << "Please write a state name to learn its capital" << endl;
	cin >> statename;

	//prints out the capital of the state that was given by the user
	//since we used pair, after the statename is given the map automatically prints out the capital
	cout << "The capital of "+statename +" is " + stateDataMap[statename] << endl;
}