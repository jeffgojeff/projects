//Jeffrey C. Slocum
//jcs307
#include <iostream>
using namespace std;

//inform the processor this function will be used
bool Prime(int &);


int main()
{
	//declare variables
	int start, end, num;

	//gather info from user
	cout << "Range start: ";
	cin >> start;
	cout << "Range end: ";
	cin >> end;

	//extra variable needed to keep data from user intact
	//used 'num' for while loop, and increased num each time starting at the user defined number
	num = start;

	cout << "The Prime numbers from " << start << " to " << end << " are: " << endl;

	//while loop to check all numbers in any given range
	while(num <= end)
	{
		//if Prime() returns true, print the value of 'num' to the screen
		if (Prime(num))
		{
			cout << num << endl;
			num++;
		}
		else
		{
			num++;
		}
	}
	cout << "Thank you, drive thru." << endl;
}

//Prime() defintion
bool Prime(int &x)
{
	//declare a variable and set to true
	bool div = true;
	
	//for loop to check all possible division values to test for primeness
	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			div = false;
		}
	}
	//return the value of div
	//will either be true or false
	return div;
}