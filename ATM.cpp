#include<iostream>
using namespace std;

void showMenu() {
	cout << "________Menu_________" << endl;
	cout << "1.Check Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.Exit" << endl;
	cout << endl;
}

int main()
{
	int option;
	double balance = 5000;
	do
	{
		showMenu();
		

		cout << "Option : ";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1:cout << "Your balance is " << balance << " $"<< endl;
			cout << endl;
			break;

		case 2:cout << "Deposit Amount : ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			cout << endl;
			break;

		case 3:cout << "Withdraw Amount : ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "No enough balance" << endl;
			cout << endl;
			break;
		}
	} while (option != 4);
	system("pause>0");
}

		
		
	
