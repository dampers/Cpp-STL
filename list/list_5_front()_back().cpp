#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{100, 200, 10, 50, 60};

	cout << "the first element of list : " << lst.front() << endl;
	cout << "the last element of list : " << lst.back() << endl;

	return 0;
}
