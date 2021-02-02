#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40};

	// The return type of v.begin() is vector<int>::iterator.
	// v.begin() returns the first address of vector.
	vector<int>::iterator it = v.begin();
	cout << *it << endl;

	// The return type of v.end() is vector<int>::iterator.
	// v.end() returns THE NEXT ADDRESS of the last element of vector.
	vector<int>::iterator back_it = v.end();

	cout << *back_it << endl; // points end address.
	--back_it; // gets previous address.
	cout << *back_it << endl; // points last element.

	return 0;
}
