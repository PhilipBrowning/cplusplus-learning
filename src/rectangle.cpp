#include <iostream>
using namespace std;
#include <iomanip>


int main ()
{
	int height, width;
	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;

	for (int h=0; h < height; h++)
	{
		for (int w=0; w < width; w++)
		{
			// setw comes from iomanip and will set 3 for field width
			cout << setw(3)<<symbol;

		}
		cout << endl;
	}

}
