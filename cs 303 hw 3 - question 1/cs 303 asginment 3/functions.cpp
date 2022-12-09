#include<iostream>
#include<string>
#include <queue>
#include "Header.h"
using namespace std;

void move_to_rear(queue<double>numbers,double add) 
{
	//asks the user to enter a number
	cout << "add a new number to the end of the list" << endl;
	cin >> add;
	//inserts the number to the end
	numbers.push(add);
	//by saving the number in the front to num, we store the first number without cahnging it
	double num = numbers.front();
	//then we remove the first number, which was 1, but since its still saved in another variable we can
	//can push it back to the end using the push function
	numbers.pop();
	//now to push back the first element to the last last place, all we have to do is use push function,
	// and enter num inusde the paranthesis, since num contains the first element that was removed.
	numbers.push(num);
	//prints out the first and last number after removing and implementing first number to the rear
	cout << "First number is ";
	cout <<numbers.front() << endl;
	cout << "Last number is ";
	cout << numbers.back() << endl;
}

