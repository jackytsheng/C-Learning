
#include <cstdlib>	// general purpose
#include <iostream> // read and write data
#include <string>		// work with strin
#include <limits>		// work with max and min
#include <vector>		// work with vector
#include <sstream>	// string stream
#include <numeric>	// sequence of value
#include <ctime>		// work with time
#include <cmath>		// work with math

// replace std::cout with std
using namespace std;

// signature to the fuction
void printS(vector<string> vStrings);

// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char **argv)
{
	cout << "Tutorial 4" << endl;
	cout << "-----Function-----" << endl;

	vector<string> words;
	stringstream ss("Some Random Words to test out the print function !");
	string word;

	// A while loop will execute as long as there are
	// more words
	while (getline(ss, word, ' '))
	{
		words.push_back(word);
	}

	// print out the all the words individually
	cout << "Printing the words int the following line:" << endl;
	printS(words);

	// useful tutorial on pointer: https://www.youtube.com/watch?v=KHZU1dnK4n0&ab_channel=CalebCurry
	// useful tutorial on reference: https://www.youtube.com/watch?v=OCL7mSFCIx0&ab_channel=CalebCurry

	cout << "-----Pointer-----" << endl;

	// A Pointer stores a address in memory int * read as pointer that points to the address that stores int value
	int *pNumber1 = NULL;
	int Number1 = 1;
	// & can access to the variable's address
	pNumber1 = &Number1;

	int *pNumber2;
	int Number2 = 2;
	pNumber2 = &Number2;

	int aNumber[3] = {1, 2, 3};

	cout << "Address to the variable Number1 : " << pNumber1 << "\n";
	cout << "Address to the variable Number2 : " << pNumber2 << "\n";
	cout << "Address to the number array : " << aNumber << "\n";
	// first element of the array
	cout << "value at about address : " << *aNumber << "\n";
	cout << "Address to the number array + 1 : " << aNumber + 1 << "\n";
	cout << "value at about address + 1 : " << *(aNumber + 1) << "\n";

	// reference
	int a = 8;

	cout << "value for 'a' " << a << "\n";

	// b is then just alias to a,
	int &b = a;

	cout << "value for 'b' " << b << "\n";
	b = 9;

	cout << "value for 'a' after changing the reference " << a << "\n";
}
void printS(vector<string> vStrings)
{
	cout << "[";
	for (int i = 0; i < vStrings.size(); i++)
	{
		if (i == 0)
		{
			cout << vStrings[i];
			continue;
		}
		cout << "," << vStrings[i];
	}
	cout << "]" << endl;
};