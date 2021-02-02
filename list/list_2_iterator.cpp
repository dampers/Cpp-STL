#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{10, 20, 30, 40};

	// The return type of lst.begin() is list<type>::iterator.
	// lst.begin() returns the first address of list.
	for(list<int>::iterator it = lst.begin(); it!=lst.end(); ++it)
		cout << *it << ' ';
	cout << endl;

	// return type of lst.begin() is list<type>::reverse_iterator.
	// lst.rbegin() returns the first address of reversed list.
	for(list<int>::reverse_iterator it=lst.rbegin(); it!=lst.rend(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
