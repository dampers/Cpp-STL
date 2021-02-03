#include <iostream>
#include <list>
#include <iterator>

using namespace  std;

int main()
{

	list<int> lst{1, 2, 3, 4, 5};
	cout<<"Init list : ";
	for(list<int>::iterator it = lst.begin();it!=lst.end(); ++it)
		cout<<*it<<' ';
	cout<<endl;

	list<int>::iterator iter = lst.begin();

	// advance(iterator, n), ++ iterator n times.
	advance(iter, 2);

	// insert value at the iter.
	lst.insert(iter, 9);

	cout<<"After insert : ";
	for(list<int>::iterator it = lst.begin();it!=lst.end(); ++it)
		cout<<*it<<' ';
	cout<<endl;

	return 0;
}

