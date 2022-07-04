#include <iostream>

using namespace std;
int main () {
	char c1, c2, c3, c4 ,c5;
	cout << "Enter 5 letters: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;

	cout << "ASCII message: " << int(c1) << " " << int(c2)
		<< " " << int(c3) << " " << int(c4) << " " <<  int(c5) << endl;

	//int asciiNum;
	//std::cout << "input a number to get the ascii letter: ";
	//std::cin >> asciiNum;
	//std::cout << char(asciiNum) << std::endl;
	
}
