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

	// v.erase(first_iter, last_iter) removes the element that iterator points.
	// Time complexity is Linear(the size of container). O(N)

	v.erase(v.begin()+2, v.begin()+5);
	cout<<"erase some elements : ";
	print_container(v);
	return 0;
}
