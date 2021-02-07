#include <iostream>
#include <deque>

using namespace std;

int main()
{

	// deque<type> name;
	deque<int> dq1;

	// deque<type> name(size);
	deque<int> dq2(5); // size = 5.

	// deque<type> name(size, init_value);
	deque<int> dq3(5, 3); // size = 5, init_value = 3.

	// deque<type> name{elements...};
	deque<int> dq4{1, 2, 3, 4};

	// deque<type> name = deque<type>();
	deque<int> dq5 = deque<int>();

	// dq6 == dq3
	deque<int> dq6(dq3.begin(), dq3.end());

	// dq7 == dq4
	deque<int> dq7(dq4);
	return 0;
}