#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{10, 20, 30, 40};

	// lst.begin()'s return type is list<type>::iterator.
	// list.begin() returns list's first address.
	for(list<int>::iterator it = lst.begin(); it!=lst.end(); ++it)
		cout << *it << ' ';
	cout << endl;

	// lst.rbegin()'s return type is list<type>::reverse_iterator.
	// lst.rbegin() returns list's reversed list's first address.
	for(list<int>::reverse_iterator it=lst.rbegin(); it!=lst.rend(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
