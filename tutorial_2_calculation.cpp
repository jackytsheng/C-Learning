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

	cout << "Tutorial 2" << endl;
	cout << "-----Calculation------" << endl;
	string snum1;
	int num2;
	cout << "Enter a number 1" << endl;
	cin >> snum1;
	int num1 = stoi(snum1);
	cout << "Enter a number 2" << endl;
	cin >> num2;

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d %% %d = %d \n", num1, num2, num1 % num2);

	cout << "-----Logics------" << endl;

	// Conditional Operators : > < >= <= == !=
	// Logical Operators : && || !
	int num;
	cout << "attempting 412 LeetCode Fizz Buzz" << endl;
	cin >> num;

	cout << "[";
	for (int i = 0; i < num; i++)
	{
		if (i != 0)
		{
			cout << ",";
		}
		auto count = i + 1;
		if (count % 3 == 0 && count % 5 == 0)
		{
			cout << "\"FizzBuzz\"";
		}
		else if (count % 5 == 0)
		{
			cout << "\"Buzz\"";
		}
		else if (count % 3 == 0)
		{
			cout << "\"Fizz\"";
		}
		else
		{
			cout << "\"" << to_string(count) << "\"";
		}
	}
	cout << "]" << endl;

	cout << "finish 5 attempting 412 LeetCode Fizz Buzz" << endl;
	short int age = 26;
	cout << "Your age is " << age << endl;

	bool canIDrink = (age >= 18) ? true : false;

	cout << "Can I Drink ? : " << canIDrink << endl;

	// Shows bool values as true or false
	cout.setf(ios::boolalpha);

	cout << "Can I Drink ? :  " << canIDrink << endl;
	return 0;
}