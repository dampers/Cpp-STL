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
	vector<int> v = {1, 2, 3, 4};
	vector<int>::iterator it = v.begin();
	cout<<"Before insert : ";
	print_container(v);

	//v.insert(iter, value) inserts value before iterator pos.
	// returns iterator pointing to the inserted value.
	//it = v.insert(it, 5);
	// Time complexity is linear. O(N)
	v.insert(it, 5);
	v.insert(v.begin()+3, 5);
	cout<<"After insert : ";
	print_container(v);
	return 0;
}