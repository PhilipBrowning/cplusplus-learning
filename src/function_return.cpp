#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
	for (int i=2; i<number;i++)
	{
		if (number%i ==0)
		{
			return false;
		}
	}
	return true;
}


int main ()
{
	int number; 
	cout << "Number: ";
	cin >> number;

        //bool isPrime=true;
	//for (int i=2; i<number;i++)
	//{
	//	if (number%i ==0)
	//	{
	//		isPrime = false;
	//		break;
	//	}
	//}
	bool isPrime = isPrimeNumber(number);
	if (isPrime)
	{
		cout << "This is a prime number"<<endl;
	}
	else
	{
		cout << "This number is not prime"<<endl;
	}
}
