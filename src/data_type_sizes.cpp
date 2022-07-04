#include <iostream>
#include <string>
#include <climits>

int main() {

	using namespace std;
        string dataType;

	cout << "Enter the data type you want to see the size of: " << endl;
	cin >> dataType;
	if (dataType == "int") 
	{
		cout << "Int size is " << sizeof(int) << " bytes" << endl;
		cout << "Int max value is " << INT_MAX << endl;
		cout << "Int min value is " << INT_MIN << endl;
	}
	else if (dataType == "double")
	{
		cout << "double size is " << sizeof(double) << " bytes" << endl;
	}
	else {
		cout << "That is not a datatype I recognize." << endl;
	}

}

