#include <iostream> // read and write data

using namespace std;

class IntNode
{
public:
	int key;
	int val;
	IntNode *next;

	IntNode()
	{
		key = 0;
		val = 0;
		next = NULL;
	}
	IntNode(int k, int num)
	{
		key = k;
		val = num;
		next = NULL;
	}

	~IntNode()
	{
		delete next;
	}
};

class SinglyLinkList
{
public:
	IntNode *head;

	SinglyLinkList()
	{
		head = NULL;
	}
	SinglyLinkList(IntNode *headNode)
	{
		head = headNode;
	}

	// 1. check if a node exist
	IntNode *nodeExists(int k)
	{
		IntNode *temp = NULL;
		IntNode *ptraverse = head;
		while (ptraverse != NULL)
		{
			if (ptraverse->key == k)
			{
				temp = ptraverse;
			}
			ptraverse = ptraverse->next;
		}
		return temp;
	}
	// helper: find the last node, assuming head is not empty
	IntNode *getLastNode()
	{
		IntNode *ptraverse = head;
		while (ptraverse->next != NULL)
		{
			ptraverse = ptraverse->next;
		}
		return ptraverse;
	}
	IntNode *getNode(int k)
	{

		IntNode *ptraverse = head;
		while (ptraverse->key != k)
		{
			ptraverse = ptraverse->next;
		}
		return ptraverse;
	}
	// 2. append node to the list
	void append(IntNode *n)
	{
		if (nodeExists(n->key) != NULL)
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
				cout << "Node appended to the end" << endl;
			}
		}
	}
	// 3. prepend node to the start
	void prepend(IntNode *n)
	{
		if (nodeExists(n->key) != NULL)
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
				n->next = head;
				head = n;
				cout << "Node appended to the beginning" << endl;
			}
		}
	}
	// 4. insert after particular node
	void insertNode(int k, IntNode *n)
	{
		if (nodeExists(k) == NULL)
		{
			cout << "Node doesn't exists" << endl;
		}
		else
		{
			if (nodeExists(n->key) != NULL)
			{
				cout << "Node to be inserted exists" << endl;
			}
			else
			{
				IntNode *nodeAtk = getNode(k);
				n->next = nodeAtk->next;
				nodeAtk->next = n;
				cout << "Node inserted" << endl;
			}
		}
	}
	// 5. delete node at k
	void deleteNode(int k)
	{
		if (head == NULL)
		{
			cout << "List empty, can't be deleted" << endl;
			return;
		}

		if (head->key == k)
		{
			head = head->next;
			cout << "Node deleted at key : " << k << endl;
			return;
		}

		if (nodeExists(k) == NULL)
		{
			cout << "Node doesn't exists" << endl;
		}
		else
		{
			IntNode *prevNode = head;
			IntNode *currentNode = head->next;

			// while not the end yet
			while (currentNode != NULL)
			{
				if (currentNode->key == k)
				{
					prevNode->next = currentNode->next;
					cout << "Node deleted at key : " << k << endl;
					return;
				}
				prevNode = currentNode;
				currentNode = currentNode->next;
			}
			cout << "Node doesn't exist" << k << endl;
			return;
		}
	}
	// 6. update node at k
	void updateNodeAt(int k, int newVal)
	{

		if (nodeExists(k) == NULL)
		{
			cout << "Node doesn't exists" << endl;
		}
		else
		{
			getNode(k)->val = newVal;
			cout << "value at key: " << k << " Update to : " << newVal << endl;
		}
	}
	// 7. print the list
	void print()
	{
		if (head == NULL)
		{
			cout << "()" << endl;
			return;
		}
		else if (head->next == NULL)
		{
			cout << "(" << head->val << ")" << endl;
			return;
		}

		cout << "(" << head->val;
		IntNode *ptraverse = head->next;
		while (ptraverse != NULL)
		{
			cout << "," << ptraverse->val;
			ptraverse = ptraverse->next;
		}
		cout << ")" << endl;
	}
};

int main()
{
	IntNode n1(1, 1);
	cout << "new empty SinglyLinkList" << endl;
	SinglyLinkList s2;
	s2.print();
	cout << "new SinglyLinkList with initial node" << endl;
	SinglyLinkList s1(&n1);
	s1.print();
	IntNode n_exist(1, 2);
	IntNode *n2 = new IntNode(2, 2);
	s1.append(&n_exist);
	s1.append(n2);
	s1.print();
	IntNode *n4 = new IntNode(4, 4);
	s1.append(n4);
	s1.print();
	IntNode *n3 = new IntNode(3, 3);
	s1.insertNode(2, n3);
	s1.print();
	IntNode *n0 = new IntNode(0, 0);
	s1.prepend(n0);
	s1.print();
	s1.deleteNode(0);
	s1.print();
	s1.updateNodeAt(3, 30);
	s1.print();
}
