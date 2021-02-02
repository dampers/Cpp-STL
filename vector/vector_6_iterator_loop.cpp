#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40};

	// The type of it is vector<int>::iterator.
	// operator ++ in iterator means next iterator.
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;

	// The type of rit is vector<int>::reverse_iterator.
	// operator ++ in reverse_iterator means next reverse_iterator.
	for(vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); rit++)
		cout << *rit << ' ';
	cout << endl;
	
	return 0;
}


