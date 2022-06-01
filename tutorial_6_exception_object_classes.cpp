
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
#include "Shape.h"
#include "Circle.h"

// replace std::cout with std
using namespace std;

vector<int> plusOne(vector<int> &digits);

// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char **argv)
{
	// Exceptions are errors that occur when things don't
	double num3 = 10, num4 = 0;
	try
	{
		if (num4 == 0)
		{
			throw "Division by Zero Error";
		}
		else
		{
			printf("%.1f / %.1f = %.1f", num3, num4,
						 (num3 / num4));
		}
	}

	catch (const char *exp)
	{
		cout << "Error : " << exp << endl;
	}

	Shape square(10, 5);
	Circle circle(10);
}
