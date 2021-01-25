#include <iostream>
#include <vector>
using namespace std;

void print_container(const vector<int>& v)
{
	for(size_t i=0;i<v.size();i++) cout<<v[i]<<' ';
	cout<<endl;
}

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout<<"init_vector : ";
	print_container(v);

	// v.erase(iterator) removes the element that iterator points.
	// Time complexity is Linear(the size of container). O(N)

	v.erase(v.begin());
	// returns Iterator following the last removed element.
	// vector<int>::iterator it = v.erase(v.begin());
	cout<<"erase first element : ";
	print_container(v);
	return 0;
}
