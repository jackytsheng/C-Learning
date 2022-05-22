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

// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char **argv)
{

	cout << "Tutorial 3" << endl;

	// more about vector https://www.geeksforgeeks.org/vector-in-cpp-stl/
	cout << "-----Vector------" << endl;
	// initial vector size of array
	vector<int> vNums(2);

	vector<int> vNums2;

	// assign int '3' two times
	vNums2.assign(2, 3);

	// Add values
	vNums[0] = 1;
	vNums[1] = 2;

	vNums.push_back(3);
	cout << "Vector size after pushed_back: " << vNums.size() << endl;

	vNums.pop_back();
	cout << "Vector size after pop_back: " << vNums.size() << endl;

	cout << "Vector size when elements are assign: " << vNums2.size() << endl;

	cout << "-----Loops------" << endl;

	int i = 1;

	// while loop
	while (i <= 20)
	{
		// If a value is even don't print it
		if ((i % 2) == 0)
		{
			i += 1;
			continue;
		}

		// Break stops execution of the loop and jumps
		// to the line after the loops closing }
		if (i == 15)
			break;

		cout << i << "\n";

		i += 1;
	}

	// A stringstream object receives strings separated
	// by a space and then spits them out 1 by 1
	vector<string> words;
	stringstream ss("Some Random Words");
	string word;

	// A while loop will execute as long as there are
	// more words
	while (getline(ss, word, ' '))
	{

		words.push_back(word);
	}

	// Cycle through each index in the vector using
	// a for loop
	for (int i = 0; i < words.size(); ++i)
	{
		cout << words[i] << endl;
	}

	// An abbreviated for loop
	int arr3[] = {1, 2, 3};
	for (auto x : arr3)
		cout << x << endl;

	// Do while loops are guaranteed to execute at
	// least once
	// We'll create a secret number guessing game

	// We need to seed the random number generator
	// time() returns the number of seconds
	// since 1, 1, 1970
	// Include <ctime>
	srand(time(NULL));

	// Generate a random number up to 10
	int secretNum = rand() % 11;
	int guess = 0;
	do
	{
		cout << "Guess the Number : ";
		cin >> guess;
		if (guess > secretNum)
			cout << "To Big\n";
		if (guess < secretNum)
			cout << "To Small\n";
	} while (secretNum != guess);

	cout << "You guessed it" << endl;
	return 0;
}