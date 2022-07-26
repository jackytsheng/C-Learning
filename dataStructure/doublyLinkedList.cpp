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
		if (head == NULL)
		{
			return NULL;
		}
		cout << head->val << endl;
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
				return;
			}

			IntNode *last = getLastNode();
			last->next = n;
			n->prev = last;
			cout << "Node appended to the end" << endl;
		}
	}

	// 4. add node to start of the list
	void prepend(IntNode *n)
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
				cout << "First Node prepend" << endl;
			}
			else
			{
				IntNode *temp = head;
				n->next = temp;
				temp->prev = n;
				head = n;
				cout << "Node prepend to the beginning" << endl;
			}
		}
	}

	// 5. insert node in between a key
	void insert(IntNode *n, int key)
	{
		if (getNode(n->key) != NULL)
		{
			cout << "Node exists" << endl;
		}
		else
		{
			IntNode *nodeAtKey = getNode(key);
			IntNode *prevNodeAtKey = nodeAtKey->prev;
			prevNodeAtKey->next = n;
			n->prev = prevNodeAtKey;
			n->next = nodeAtKey;
			nodeAtKey->prev = n;
		}
	}

	void print()
	{
		cout << "[";
		if (head == NULL)
		{
			cout << "]" << endl;
			return;
		}

		IntNode *ptraverse = head;
		cout << head->val;

		while (ptraverse->next != NULL)
		{
			ptraverse = ptraverse->next;
			cout << "," << ptraverse->val;
		}

		cout << "]" << endl;
	}
};

int main()
{
	cout << "--- Append ---" << endl;
	IntNode n1(1, 1);
	IntNode n2(2, 2);
	DoublyLinkList dl;
	dl.print();
	cout << "head node : " << dl.head << endl;
	dl.append(&n1);
	dl.print();
	cout << "first node : " << &n1 << endl;
	cout << "first node next : " << n1.next << endl;
	dl.append(&n2);
	dl.print();
	cout << "first node next : " << n1.next << endl;
	cout << "second node : " << &n2 << endl;
	cout << "second node prev : " << n2.prev << endl;

	cout << "--- Prepend ---" << endl;
	IntNode n3(3, 3);
	IntNode n4(4, 4);
	DoublyLinkList dl2;
	cout << "head node : " << dl2.head << endl;
	dl2.prepend(&n4);
	dl2.print();
	cout << "first added node : " << &n4 << endl;
	cout << "first added node prev: " << n4.prev << endl;
	cout << "first added node next : " << n4.next << endl;
	dl2.prepend(&n3);
	dl2.print();
	cout << "second added node : " << &n3 << endl;
	cout << "second added node prev : " << n3.prev << endl;
	cout << "second added node next : " << n3.next << endl;

	cout << "--- Insert ---" << endl;
	IntNode n5(5, 5);
	IntNode n6(6, 6);
	dl2.append(&n6);
	dl2.print();
	cout << "before insert" << endl;
	dl2.insert(&n5, 6);
	dl2.print();
}