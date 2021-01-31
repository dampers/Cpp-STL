#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{100, 200, 10, 50, 60};

	cout << "Before pop : ";
	for(list<int>::iterator it = lst.begin(); it!=lst.end(); ++it)
		cout << *it << ' ';
	cout << endl;

	// Removes the last element of the list.
	lst.pop_back();

	// Removes the first element of the list.
	lst.pop_front();

	cout << "After pop : ";
	for(list<int>::iterator it = lst.begin(); it!=lst.end(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
