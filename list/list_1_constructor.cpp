#include <iostream>
#include <list>
using namespace std;

int main()
{
	// list<type> name;
	list<int> lt1; // size = 0;

	// list<type> name(size);
	list<int> lt2(5); // size = 5;

	// list<type> name(size, init_value);
	list<int> lt3(5, 5); // size = 5, init_value = 5;

	// list<type> name{elements...};
	list<int> lt4{1, 2, 3, 4, 5};

	// list<type> name = list<type>();
	list<int> lt5 = list<int>();

	// list<type> name(subject to copy);
	list<int> lt6(lt4);

	// list<type> name(iter, iter);
	list<int> lt7(lt3.begin(), lt3.end());
	return 0;
}