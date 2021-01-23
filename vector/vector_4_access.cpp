#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40};
	for(size_t i=0;i<v.size();i++)
		cout << v[i] << ' ';
	cout << endl;

	v[2] = 100;

	for(size_t i=0;i<v.size();i++)
		cout << v[i] << ' ';
	cout << endl;
	
	return 0;
}

