#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst;

	// Appends the given element value to the end of the list.
	lst.push_back(5);
	lst.push_back(10);

	//Prepends the given element value to the beginning of the list.
	lst.push_front(100);
	lst.push_front(200);

	for(list<int>::iterator it = lst.begin(); it!=lst.end(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
