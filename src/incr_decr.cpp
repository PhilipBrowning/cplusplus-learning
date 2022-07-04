#include <iostream>

int main ()
{
	int counter = 7;
	counter++;
	std::cout << counter << std::endl;
	counter--;
	std::cout << counter << std::endl;

	int counter2 = 7;
	std::cout << ++counter2 << std::endl;
	// the postdecrement won't show up until the following statement
	std::cout << counter2-- << std::endl;
	std::cout << counter2 << std::endl;

}
