#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40};
	for(size_t i=0;i<v.size();i++)
		cout << v[i] <<' ';
	cout<<endl;

	// can access by v.at(index) or v[index].
	// v.at(index) checks validation of index.
	v.at(2) = 100;
	v[3] = 44;

	for(size_t i=0;i<v.size();i++)
		cout<< v.at(i) << ' ';
	cout<<endl;
	return 0;
}
