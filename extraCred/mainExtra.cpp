//Jeffrey C. Slocum
//jcs307

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int wordFinder(string [], string [], int [], int &, int &);
void masterList(string [], int [], int &);


int main()
{
	
	const int SIZE = 1000;
	string arr1[SIZE];
	string arr2[SIZE];
	int arr3[SIZE];
	int count = 0;
	int count2 = 0;
	string file1;
	string file2;
	fstream fin;

	cout << endl;
	cout << "**************************************************************************************" << endl;
	cout << "* WARNING: Filenames entered must be in current directory and contain file extention *" << endl;
	cout << "**************************************************************************************" << endl << endl;
	cout << "Enter in a file to search THROUGH: ";
	cin >> file1;
	cout << "Enter in a file name of words to search FOR: ";
	cin >> file2;
	cout << endl;

	//generate array for the first file opened
	//use count for placement value
	//arr1 - A[]
	fin.open(file1);
	while (count < SIZE && fin >> arr1[count])
	{
		count++;
	}
	fin.close();

	//generate array for the second file opened
	//use count2 for placement value
	//arr2 - B[]
	fin.open(file2);
	while (count2 < SIZE && fin >> arr2[count2])
	{
		count2++;
	}

	//generate 3rd array
	//use count2 to mimic the word list array from file1
	//arr3 - N[]
	for (int i = 0; i < count2; ++i)
	{
		arr3[i] = 0;
	}

	wordFinder(arr1, arr2, arr3, count, count2);
	masterList(arr2, arr3, count2);

	return 0;
}


int wordFinder(string A[], string B[], int N[], int &count, int &count2)
{
	//loop for each word to search for
	for (int i = 0; i < count2; ++i)
	{
		//loop to search for each word
		for (int k = 0; k < count; ++k)
		{
			if (B[i] == A[k])
			{
			//increment arr3 each time a word is found
			N[i]++;
			}
		}
	}

	return 0;
}


void masterList(string B[], int N[], int &count2)
{
	//loop to print both arrays to the screen
	for (int i = 0; i < count2; ++i)
	{
		cout << B[i] << " " << N[i] << endl;
	}
	cout << endl;
}



