#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40};

	// In vector<int> v.begin()'s return type is vector<int>::iterator.
	// v.begin() returns vector's first address.
	vector<int>::iterator it = v.begin();
	cout << *it << endl;

	// In vector<int> v.end()'s return type is vector<int>::iterator.
	// v.end() returns vector's last element's NEXT ADDRESS.
	vector<int>::iterator back_it = v.end();

	cout << *back_it << endl; // points end address.
	--back_it; // gets previous address.
	cout << *back_it << endl; // points last element.

	return 0;
}
