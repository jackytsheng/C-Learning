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

	cout << "Tutorial 1" << endl;
	cout << "-----Int------" << endl;
	cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
	cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
	cout << "Min short int " << numeric_limits<short int>::min() << endl;
	cout << "Max short int " << numeric_limits<short int>::max() << endl;
	cout << "Min int " << numeric_limits<int>::min() << endl;
	cout << "Max int " << numeric_limits<int>::max() << endl;
	cout << "Min long int " << numeric_limits<long int>::min() << endl;
	cout << "Max long int " << numeric_limits<long int>::max() << endl;

	cout << "-----Float-----" << endl;
	cout << "Min float " << numeric_limits<float>::min() << endl;
	cout << "Max float " << numeric_limits<float>::max() << endl;
	cout << "Min double " << numeric_limits<double>::min() << endl;
	cout << "Max double " << numeric_limits<double>::max() << endl;
	cout << "Min long double " << numeric_limits<long double>::min() << endl;
	cout << "Max long double " << numeric_limits<long double>::max() << endl;

	cout << "-----Precision-----" << endl;
	// The float is accurate to 6 digits
	float f1 = 1.111111111;
	float f2 = 1.111111111;

	printf("Float precision %.8f \n", f1 + f2);

	// Doubles have 15 digits of precision
	double d1 = 1.111111111111111111;
	double d2 = 1.111111111111111111;

	printf("Float precision %.17f \n", d1 + d2);

	cout << "-----Byte-----" << endl;

	// auto can be used to implicit declare variable
	auto boolByte = true;

	cout << "bits in Byte " << 8 << endl;
	cout << "boolean Byte " << sizeof(boolByte) << endl;
	cout << "int Byte " << sizeof(int) << endl;
	cout << "short int Byte " << sizeof(short int) << endl;
	cout << "long int Byte " << sizeof(long int) << endl;
	cout << "float Byte " << sizeof(float) << endl;
	cout << "double Byte " << sizeof(double) << endl;
	cout << "long double Byte " << sizeof(long double) << endl;

	return 0;
}