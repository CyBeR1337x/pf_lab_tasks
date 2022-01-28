#include <iostream>
using namespace std;
void main() {
	int account_numbers[10] = { 10,11,12,13,14,15,16,17,18,19 };
	int amounts[10] = { 25000,35000,15000,45000,10000,85000,8000,90000,89000,74000 };
	char state;
	int acc_num, in_amount, index = -1;

	for (;;) { //Infinite Loop
		cout << "Press D to Deposit amount..\n"
			<< "Press W to Withdraw amount..\n"
			<< "Press T to Transfer amount..\n" << endl;
		cin >> state;

		if (state == 'D' || state == 'd') {
			cout << "Enter account number: ";
			cin >> acc_num;
			cout << "Enter amount to be deposited: ";
			cin >> in_amount;

			//Gets the index of account
			for (int i = 0; i < 10; i++)
				if (acc_num == account_numbers[i])
					index = i;

			//Adds amount to account
			amounts[index] += in_amount;

			cout << "Amount added to account.." << endl;
			cout << "----------------------------------------------------" << endl;
		}
		else if (state == 'W' || state == 'w') {
			cout << "Enter account number: ";
			cin >> acc_num;
			cout << "Enter amount to be withdrawn: ";
			cin >> in_amount;

			//Gets the index of account
			for (int i = 0; i < 10; i++)
				if (acc_num == account_numbers[i])
					index = i;

			//Subtracts amount from account..
			amounts[index] -= in_amount;

			cout << "Amount withdrawn successfully.." << endl;
			cout << "----------------------------------------------------" << endl;
		}
		else if (state == 'T' || state == 't') {
			int acc_num_1, acc_num_2, index_2;
			cout << "Enter the account number from where you want to transfer: ";
			cin >> acc_num_1;
			cout << "Enter the account number where you want to trasnfer the amount: ";
			cin >> acc_num_2;

			int transfer_amount;

			//Gets the index of Sender account...
			for (int i = 0; i < 10; i++)
				if (acc_num_1 == account_numbers[i])
					index = i;

			//Gets the index of Receiver account..
			for (int i = 0; i < 10; i++)
				if (acc_num_2 == account_numbers[i])
					index_2 = i;

			//Stores the amount available in Sender account..
			transfer_amount = amounts[index];
			//Adds the amount to receiver account;
			amounts[index_2] += transfer_amount;
			//Subtracts the amount from sender account;
			amounts[index] -= transfer_amount;

			cout << "Amount transferred..." << endl;
			cout << "----------------------------------------------------" << endl;
		}
		else
			break;
	}


	system("pause");
}
