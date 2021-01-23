#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};

    cout << "Before clear : ";
    for(size_t i=0;i<v.size();i++)
    	cout << v[i]<< ' ';
    cout << "\nSize = " << v.size() << '\n';
 
    // clear() -> complexity is Linear in the size of container. O(v.size())
    v.clear();
 
    cout << "After clear : ";
     for(size_t i=0;i<v.size();i++)
    	cout << v[i]<< ' ';

    cout << "\nSize = " << v.size() << '\n';
}

