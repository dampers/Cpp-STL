#include <iostream>
#include <list>

using namespace  std;

int main()
{

	list<int> lst{1, 2, 3, 4, 5};

	// lst.size() returns size of the list.
	cout<<"Size of list :" << lst.size() << endl;

	// lst.clear() removes all elements.
	lst.clear();
	cout<<"After clear size of list :" << lst.size() << endl;
	// the size of the list is zero -> lst.empty returns true.
	// the size of the list is not zero -> lst.empty returns false.
	if(lst.empty())
		cout << "the list is empty." <<endl;	
	return 0;
}

