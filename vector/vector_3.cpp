#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);

	// v.empty() returns true if vector is empty.
	// v.empty() returns false if vector is NOT empty.
	if(v.empty()) cout << "v is empty." << endl;
	else cout << "v\'s size : " << v.size() << endl;

	// pop_back() removes the last element.
	v.pop_back();
	if(v.empty()) cout << "v is empty." << endl;
	else cout << "v\'s size : " << v.size() << endl;

	return 0;
}

