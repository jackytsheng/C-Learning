
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
	string s;
	cin >> s;
	// printing the char array
	int number = 0;
	size_t pos = std::string::npos;

	if ((pos = s.find("IV")) != string::npos)
	{
		number += 4;
		s.erase(pos, 2);
	};
	if ((pos = s.find("IX")) != string::npos)
	{
		number += 9;
		s.erase(pos, 2);
	};
	if ((pos = s.find("XL")) != string::npos)
	{
		number += 40;
		s.erase(pos, 2);
	};
	if ((pos = s.find("XC")) != string::npos)
	{
		number += 90;
		s.erase(pos, 2);
	};
	if ((pos = s.find("CD")) != string::npos)
	{
		number += 400;
		s.erase(pos, 2);
	};
	if ((pos = s.find("CM")) != string::npos)
	{
		number += 900;
		s.erase(pos, 2);
	};

	for (auto &ch : s)
	{
		switch (ch)
		{
		case * "I":
			number += 1;
			break;
		case * "V":
			number += 5;
			break;
		case * "X":
			number += 10;
			break;
		case * "L":
			number += 50;
			break;
		case * "C":
			number += 100;
			break;
		case * "D":
			number += 500;
			break;
		case * "M":
			number += 1000;
			break;
		default:
			break;
		}
	}
	cout << number;
};