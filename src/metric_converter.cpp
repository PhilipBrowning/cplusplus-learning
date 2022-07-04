#include <iostream>

using namespace std;

int main () {

    bool end = false;
    int choice;
    float pounds;
    float kilograms;
    while(!end)
    {
	    std::cout << "Choose what to convert: " << "\n";
	    std::cout << "1. farenheit to celsius " << "\n";
	    std::cout << "2. pounds to kilograms " << "\n";
	    std::cout << "3. end program " << "\n";
	    std::cin >> choice;
	    if (choice == 3) 
	    {
		    end = true;
            }
	    else if (choice == 1)
	    {
                float celsius;
	       	float farenheit;
		cout << "Input the temperature in celsius:" << "\n";
                cin >> celsius;
                farenheit = (celsius * 9/5) + 32;
                cout << "The temperature in Farenheit is " << farenheit << "\n\n"; 
	    }
	    else if (choice == 2)
	    {
		cout << "Input weight in pounds:" << "\n";
                cin >> pounds;
		kilograms = pounds / 2 * .1;
		cout << "Weight in kilograms: " << kilograms << "\n\n";
	    }

    }

}

