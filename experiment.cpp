
#include <cstdlib>	// general purpose
#include <iostream> // read and write data
#include <string>		// work with strin
#include <limits>		// work with max and min
#include <vector>		// work with vector
#include <sstream>	// string stream
#include <numeric>	// sequence of value
#include <ctime>		// work with time
#include <cmath>		// work with math
#include <cstring>

// replace std::cout with std
using namespace std;

// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char **argv)
{
	// Basic 10-element integer array.
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int a = 12;
	int &b = a;
	int *c = &b;

	cout << &a << endl;
	cout << b << endl;
	cout << &b << endl;

	cout << c << endl;
	// Range-based for loop to iterate through the array.
	for (auto &y : x)
	{ // Access by value using a copy declared as a specific type.
		// Not preferred.

		y = 1;
		cout << y << " ";
	}
	cout << endl;
	for (auto y2 : x)
	{

		cout << y2;
	}
	cout << endl;
};