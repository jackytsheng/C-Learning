#include <iostream> // read and write data

using namespace std;

class IntQueue
{
private:
	int front;
	int rear;
	int input;
	int *arr;

public:
	IntQueue(int num)
	{
		front = -1;
		rear = -1;
		input = num;
		arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			arr[i] = 0;
		}
	}

	~IntQueue()
	{
		delete[] arr;
	}
	bool isEmpty()
	{
		return count() == 0;
	}
	bool isFull()
	{
		return count() == input;
	}

	void enqueue(int num)
	{
		if (isFull())
		{
			cout << "is already full" << endl;
			return;
		}
		else if (isEmpty())
		{
			rear++;
			front++;
		}
		else
		{
			rear = (rear + 1) % input;
		}
		arr[rear] = num;
	}
	int dequeue()
	{
		int x;
		if (isEmpty())
		{
			cout << "is already empty" << endl;
			return 0;
		}
		else if (front == rear)
		{
			x = arr[front];
			front = -1;
			rear = -1;
		}
		else
		{
			x = arr[front];
			front = (front + 1) % input;
		}
		return x;
	}
	int count()
	{
		if (rear == -1 && front == -1)
		{
			return 0;
		}
		else if (rear == front)
		{
			return 1;
		}
		else if (rear > front)
		{
			return rear - front + 1;
		}
		else
		{
			return input - (front - rear - 1);
		}
	}
};

int main(int argc, char **argv)
{
	cout << boolalpha;
	IntQueue q(4);

	cout << "is Empty" << endl;
	cout << q.isEmpty() << endl;

	cout << "keep dequeuing" << endl;
	cout << q.dequeue() << endl;

	q.enqueue(1);
	q.enqueue(2);

	cout << "counting" << endl;
	cout << q.count() << endl;
	q.enqueue(3);
	q.enqueue(4);

	cout << "keep enqueuing" << endl;
	q.enqueue(5);

	cout << "keep dequeuing" << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << "enqueuing a 1" << endl;
	q.enqueue(1);
	cout << q.dequeue() << endl;
	cout << "enqueuing a 3" << endl;
	q.enqueue(3);
	cout << q.dequeue() << endl;
	cout << "enqueuing a 10" << endl;
	q.enqueue(10);
	cout << q.dequeue() << endl;
	cout << "queue 3 items" << endl;
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	cout << "counting" << endl;
	cout << q.count() << endl;
}
