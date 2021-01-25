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
	vector<int> v = {10, 20, 30, 40};
	cout<<"init_vector : ";
	print_container(v);

	// Resizes the container to contain count elements.
	// v.resize(new_size);
	v.resize(3);
	cout<<"After resize down : ";
	print_container(v);

	return 0;
}
