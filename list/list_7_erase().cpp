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

	// removes the element that iter points.
	lst.erase(iter);

	cout<<"After erase : ";
	for(list<int>::iterator it = lst.begin();it!=lst.end(); ++it)
		cout<<*it<<' ';
	cout<<endl;

	return 0;
}

