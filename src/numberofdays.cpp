#include <iostream>
using namespace std;

int main()
{
	// (year % 4 == 0 && year % 100 !=0 || year % 400 == 0) 
	// every year evenly divisible by 4 is a leap year like 2014 / 4
	// also years evenly divisible by 100 or 400
	// years like 1600 2000 2400 are leap years and are not divisible by 100 but are by 400
	// source: the internet
	int year, month;
	cout << "Year, month: ";
	cin >> year >> month;

	// check for 4 digits in year
	if (year < 1000)
	    cout<<"Enter a four digit year please.";
	else
	{

	    switch (month)
	    {
	    	case 2:(year % 4 == 0 && year % 100 !=0 || year % 400 == 0)?
	    	       cout << "29 day in the month. It is a leap year":
	    	       cout <<"28 days in the month. It is not a leap year";break;
	    	// case for all months with 30 days
	    	case 4:
	    	case 6:
	    	case 9:
	    	case 11: cout << "30 days in the month" << endl; break;
	            // case for all months with 31 day
	    	case 1:
	    	case 3:
	    	case 5:
	    	case 7:
	    	case 8:
	    	case 10:
                    case 12: cout << "31 days in the month." << endl; break;
                    default: cout << "Not valid input!";
	    }
         }
}
