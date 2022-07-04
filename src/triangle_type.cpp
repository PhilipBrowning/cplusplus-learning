#include <iostream>

int main()
{

	float a, b, c;
	std::cout << "Enter the length of triangle sides like  a b c: ";
	std::cin >> a >> b >> c;
        // can remove brackets if the if statement is just one operation
	if (a ==b && b ==c)
		std::cout << "Equilateral traingle" << "\n";
	else
		if (a !=b && a !=c && b !=c)
			std::cout << "This is a scalene triangle" << "\n";
		
		else
			std::cout << "This is a isoceles triangle" << "\n";
}
