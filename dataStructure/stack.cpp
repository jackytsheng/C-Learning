#include <cstdlib>	// general purpose
#include <iostream> // read and write data
#include <string>		// work with strin
#include <limits>		// work with max and min
#include <vector>		// work with vector
#include <sstream>	// string stream
#include <numeric>	// sequence of value
#include <ctime>		// work with time
#include <cmath>		// work with math

using namespace std;

class IntStack
{
private:
	int top;
	int input;
	int *arr;

public:
	IntStack(int num)
	{
		top = -1;
		input = num;
		arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			arr[i] = 0;
		}
	}

	~IntStack()
	{
		delete[] arr;
	}
	bool isEmpty()
	{
		return top == -1;
	}
	bool isFull()
	{
		return top == input - 1;
	}
	void push(int numToPush)
	{
		if (isFull())
		{
			cout << "stack overflow" << endl;
		}
		else
		{
			top++;
			arr[top] = numToPush;
		}
	}
	int pop()
	{

		if (isEmpty())
		{
			cout << "stack underflow" << endl;
			return 0;
		}
		else
		{
			top--;
			int res = arr[top];
			arr[top] = 0;
			return res;
		}
	}
	int peek(int pos)
	{
		return arr[pos];
	}
	int count()
	{
		return (top + 1);
	}
	void change(int pos, int num)
	{
		arr[pos] = num;
	}
	void display()
	{
		for (int i = 0; i < input; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(int argc, char **argv)
{
	cout << boolalpha;
	IntStack s(3);
	s.push(1);
	s.push(2);

	cout << "displaying" << endl;
	s.display();

	cout << "peeking" << endl;
	cout << s.peek(1) << endl;
	cout << "counting" << endl;
	cout << s.count() << endl;
	s.pop();
	s.pop();
	cout << "is Empty" << endl;
	cout << s.isEmpty() << endl;
	cout << "keep popping" << endl;
	cout << s.pop() << endl;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "is Full" << endl;
	cout << s.isFull() << endl;
	cout << "keep pushing" << endl;
	s.push(4);
	s.display();
	cout << "changing pos 1 to 10" << endl;
	s.change(1, 10);
	s.display();
}
