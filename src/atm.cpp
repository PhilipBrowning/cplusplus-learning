#include <iostream>
using namespace std;

void showMenu() {
	cout << "*********Menu**********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. exit" << endl;
}

int main(){
	// check balance
	// deposit, withdraw, show menu
	int option;
	double balance;
	do {

	showMenu();
	cout << "Please choose an option: ";
	cin >> option;
	system("clear");
	
	switch(option) {
		case 1:cout <<"Balance is: " << "$"<< balance << "\n\n"; break; 
		case 2:cout << "Deposit amount:";        
		       double depositAmount;
		       cin >> depositAmount;
		       balance += depositAmount;
		       break;
		case 3:cout << "Withdraw amount:";        
		       double withdrawAmount;
		       cin >> withdrawAmount;
		       if (withdrawAmount <= balance)
		           balance -= withdrawAmount;
		       else
			   cout << "Not enough money to withdraw that amount!" << endl;
		       break;

	}
	}while (option !=4);
}
