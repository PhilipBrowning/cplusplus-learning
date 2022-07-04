#include <iostream>
using namespace std;


int main () 
{
	int grade, sum=0;

	for(int i=0;i < 3; i++)
	{
		// grade between 1 and 5
		do {
			cout << "Enter grade " << i+1 <<": ";
			cin >> grade;
			// while greater than 1 or less than 5 it will break out of while loop
			// otherwise will keep prompting with same value of i
		}while (grade < 1 || grade > 5);
		sum +=grade;
	}

	cout << "Sum = " << sum << endl;
	cout << "Avg grade = " << (float)sum / 3.0 << endl;
}

