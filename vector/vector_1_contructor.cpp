#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// vector<type> name;
	vector<int> v1; // size = 0;

	// vector<type> name(size);
	vector<int> v2(5); // size = 5.

	// vector<type> name(size, init_value);
	vector<int> v3(5, 0); // size = 5, init_value = 0.

	// vector<type> name = {elements...};
	vector<int> v4 = {10, 20, 30, 40};

	// vector<type> name = vector<type>();
	vector<int> v5 = vector<int>(); // size = 0.

	return 0;
}