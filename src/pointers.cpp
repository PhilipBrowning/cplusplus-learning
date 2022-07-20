#include <iostream>
using namespace std;

int main() {
	int n = 5;

	cout << &n << endl;
	int * ptr = &n;
	cout << ptr << endl;
	//dereference the pointer to get the value not location in memory
	cout << *ptr << endl;
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;
	return 0;
}
