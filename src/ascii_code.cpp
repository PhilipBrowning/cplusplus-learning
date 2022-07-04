#include <iostream>

int main () {
	int asciiNum;
	std::cout << "input a number to get the ascii letter: ";
	std::cin >> asciiNum;
	std::cout << char(asciiNum) << std::endl;
	
}
