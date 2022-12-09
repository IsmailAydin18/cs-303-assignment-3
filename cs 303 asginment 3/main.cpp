#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include "Header.h"
using namespace std;

int main() 
{
	queue<double>listqueue;
	//have instered 5 elements using the push function
	listqueue.push(1);
	listqueue.push(2);
	listqueue.push(3);
	listqueue.push(4);
	listqueue.push(5);
	
	double add{};
	char user;
	//asks the user to enter a to enter new number and see how the numbers line up
	cout << "a: to enter a new number and to display list" << endl;
	cin >> user;

	
	//if true it will continue
	while (true)
	{
		//if user chooses 'a' then the progeam will asks for new number and then move_to_rear function will execute its function
		//which is getting the first element and inserting it to the end of the queue and then it will display the order after
		if (user=='a')
		{
			//first asks the user for input and then adds that input to the back
			//then moves the first number to the end and second number becomes first
			move_to_rear(listqueue,add);
			
		}
		//if anything else thent he program will break and end
		else 
		{
			break;
		}
	}

}