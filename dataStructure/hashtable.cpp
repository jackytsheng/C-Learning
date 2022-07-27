#include <iostream> // read and write data
#include <list>			// read and write data
#include <cstring>	// read and write data
#include <cstdlib>
#include <math.h>

using namespace std;

class HashTable
{
private:
	static const int SIZE = 8;
	list<pair<int, string>> table[SIZE];

public:
	bool isEmpty();
	int hash(int id);
	void insert(int key, string val);
	void remove(int key);
	string get(int key);
	void print();
};

bool HashTable::isEmpty()
{
	bool empty = true;
	for (int i = 0; i < SIZE; i++)
	{
		auto &cell = table[i];
		if (cell.begin() != cell.end())
		{
			empty = false;
		};
	}
	return empty;
};

int HashTable::hash(int id)
{
	return id % SIZE;
};

void HashTable::insert(int key, string val)
{
	int hashVal = hash(key);
	auto &rows = table[hashVal];
	bool keyExist = false;
	auto itr = rows.begin();

	for (; itr != rows.end(); itr++)
	{
		if (itr->first == key)
		{
			keyExist = true;
			itr->second = val;
			break;
		};
	};

	if (!keyExist)
	{
		rows.emplace_back(key, val);
	};
};

void HashTable::remove(int key)
{
	int hashVal = hash(key);
	auto &rows = table[hashVal];
	auto itr = rows.begin();
	for (; itr != rows.end(); itr++)
	{
		if (itr->first == key)
		{
			rows.erase(itr);
			break;
		};
	};
};

string HashTable::get(int key)
{
	int hashVal = hash(key);
	auto &rows = table[hashVal];
	auto itr = rows.begin();
	for (; itr != rows.end(); itr++)
	{
		if (itr->first == key)
		{
			return itr->second;
		};
	};
	return "can't find the key";
};
void HashTable::print()
{
	cout << "--- Hash Table ---" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i << " :";
		auto &cell = table[i];
		auto itr = cell.begin();
		for (; itr != cell.end(); itr++)
		{
			cout << " (" << itr->first << "," << itr->second << ")";
		}
		cout << endl;
	}
	cout << "--- End Hash Table ---" << endl;
}

int id(int digit)
{
	srand(time(0));
	int module = pow(10, digit) - 1;
	return rand() % module;
};

int main()
{
	HashTable hash;

	cout << boolalpha;

	cout << "has Empty ? " << hash.isEmpty() << endl;
	cout << "inserting fix element" << endl;
	hash.insert(123, "Ben1");
	cout << "has Empty ? " << hash.isEmpty() << endl;
	hash.print();
	cout << "changing name of a fix element" << endl;
	hash.insert(123, "Ben");
	hash.print();
	hash.insert(126, "Ben2");
	hash.print();
	cout << "deleting fix element" << endl;
	hash.remove(126);
	hash.print();

	cout << "inserting fix element" << endl;
	hash.insert(456, "Nirvana");
	hash.insert(789, "Bec");
	hash.insert(000, "Gowri");
	hash.insert(111, "Fred");
	hash.print();

	cout << "inserting random element" << endl;
	hash.insert(id(3), "Jacky");
	hash.insert(id(4), "Zach");
	hash.insert(id(5), "Martin");
	hash.print();
	hash.get(111);
}