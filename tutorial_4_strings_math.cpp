
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
	cout << "Tutorial 4" << endl;
	cout << "-----Strings-----" << endl;

	// A C++ string is a series of characters that
	// can be changed
	string str1 = "I'm a string";

	// Get the 1st character
	cout << "1st : " << str1[0] << endl;

	// Get the last character
	cout << "Last : " << str1.back() << endl;

	// Get the string length
	cout << "Length : " << str1.length() << endl;

	// Copy a string to another
	string str2 = str1;

	// Copy a string after the 1st 4 characters
	string str3(str2, 4);

	cout << "Copied String : " << str3 << endl;

	// Combine strings
	string str4 = str1 + " and your not";
	cout << "Combined String : " << str4 << endl;

	// Append to the end of a string
	str4.append("!");
	cout << "Appended String : " << str4 << endl;

	// Erase characters from a string from 1 index
	// to another
	str4.erase(12, str4.length() - 1);
	cout << "Erased String : " << str4 << endl;

	// find() returns index where pattern is found
	// or npos (End of String)
	if (str4.find("string") != string::npos)
		cout << "String Index : " << str4.find("string") << endl;

	if (str4.find("stringa") == string::npos)
	{
		cout << "can't find 'stringa' in provided string" << endl;
	}
	// substr(x, y) returns a substring starting at
	// index x with a length of y
	cout << "Substring : " << str4.substr(6, 6) << endl;

	// Convert int to string
	string strNum = to_string(1 + 2);
	cout << "I'm a String : " << strNum << "\n";

	// Character functions
	char letterZ = 'z';
	char num5 = '5';
	char aSpace = ' ';
	cout << "Is z a letter or number " << isalnum(letterZ) << endl;
	cout << "Is z a letter " << isalpha(letterZ) << endl;
	cout << "Is 3 a number " << isdigit(num5) << endl;
	cout << "Is space a space " << isspace(aSpace) << endl;

	// ---------- MATH FUNCTIONS ----------
	// There are numerous math functions provided by
	// cmath en.cppreference.com/w/cpp/numeric/math

	cout << "abs(-10) = " << abs(-10) << endl;
	cout << "max(5, 4) = " << max(5, 4) << endl;
	cout << "min(5, 4) = " << min(5, 4) << endl;
	cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
	cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
	cout << "ceil(10.45) = " << ceil(10.45) << endl;
	cout << "floor(10.45) = " << floor(10.45) << endl;
	cout << "round(10.45) = " << round(10.45) << endl;
	cout << "pow(2,3) = " << pow(2, 3) << endl;
	cout << "sqrt(100) = " << sqrt(100) << endl;
	cout << "cbrt(1000) = " << cbrt(1000) << endl;

	// e ^ x
	cout << "exp(1) = " << exp(1) << endl;

	// 2 ^ x
	cout << "exp2(1) = " << exp2(1) << endl;

	// e * e * e ~= 20 so log(20.079) ~= 3
	cout << "log(20.079) = " << log(20.079) << endl;

	// 2 * 2 * 2 = 8
	cout << "log2(8) = " << log2(8) << endl;

	// Hypotenuse : SQRT(A^2 + B^2)
	cout << "hypot(2,3) = " << hypot(2, 3) << endl;

	// Also sin, cos, tan, asin, acos, atan, atan2,
	// sinh, cosh, tanh, asinh, acosh, atanh
}