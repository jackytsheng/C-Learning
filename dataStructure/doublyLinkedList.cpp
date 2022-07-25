#include <iostream> // read and write data

using namespace std;

class IntNode
{
public:
	int key;
	int val;
	IntNode *next;
	IntNode *prev;

	IntNode()
	{
		key = 0;
		val = 0;
		next = NULL;
		prev = NULL;
	}
	IntNode(int k, int num)
	{
		key = k;
		val = num;
		prev = NULL;
		next = NULL;
	}

	~IntNode()
	{
		delete next;
		delete prev;
	}
};

class DoublyLinkList
{
public:
	IntNode *head;

	DoublyLinkList()
	{
		head = NULL;
	}
	DoublyLinkList(IntNode *headNode)
	{
		head = headNode;
	}

	// 1. get node at key k otherwise return null
	IntNode *getNode(int k)
	{
		IntNode *ptraverse = head;
		if (ptraverse == NULL)
		{
			return NULL;
		}
		while (ptraverse->key != k)
		{
			ptraverse = ptraverse->next;
			if (ptraverse == NULL)
			{
				return NULL;
			}
		}
		return ptraverse;
	}

	// 2. Get the last node
	IntNode *getLastNode()
	{
		IntNode *ptraverse = head;

		while (ptraverse->next != NULL)
		{
			ptraverse = ptraverse->next;
		}

		return ptraverse;
	}

	// 3. Append node to end of the list
	void append(IntNode *n)
	{
		if (getNode(n->key) != NULL)
		{
			cout << "Node exists" << endl;
		}
		else
		{
			if (head == NULL)
			{
				head = n;
				cout << "First Node appended" << endl;
			}
			else
			{
				IntNode *last = getLastNode();
				last->next = n;
				n->prev = last;
				cout << "Node appended to the end" << endl;
			}
		}
	}
};

int main()
{
	cout << "--- Append ---" << endl;
	IntNode n1(1, 1);
	IntNode n2(2, 1);
	DoublyLinkList dl;
	dl.append(&n1);
	dl.append(&n2);
	cout << "head node : " << dl.head << endl;
	cout << "first node : " << &n1 << endl;
	cout << "first node next : " << n1.next << endl;
	cout << "second node : " << &n2 << endl;
	cout << "second node prev : " << n2.prev << endl;
}