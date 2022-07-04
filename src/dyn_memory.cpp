
#include <iostream>
#include <cstring>


void NewArrays() {
	int *p = new int[5];
	for (int i=0; i < 5; ++i) {
		p[i] = i;
	}
	delete[]p;
}

void Strings() {
	char *p = new char[4];
	// this is using c not c++
	strcpy(p, "c++");
	std::cout << p << std::endl;
	delete[]p;
}
int main() {

    Strings();

}
