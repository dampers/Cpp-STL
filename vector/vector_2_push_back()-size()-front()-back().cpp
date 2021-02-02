#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	// size_t v.size() returns vector's size.
	// size_t == unsigned int.
	cout << "v\'s size : " << v.size() << endl;

	v.push_back(10); // Appends new element 10.
	v.push_back(20); // Appends new element 20.
	v.push_back(30); // Appends new element 30.

	cout << "v\'s size : " <<v.size() << endl;

	// v.front() returns the first element of vector.
	cout << "v\'s first element : " << v.front() << endl;

	// v.back() returns the last element of vector.
	cout << "v\'s last element : " << v.back() << endl;

	return 0;
}
