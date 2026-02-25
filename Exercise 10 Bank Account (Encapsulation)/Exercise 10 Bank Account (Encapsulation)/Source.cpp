#include <iostream>

using namespace std;

class BankAccount {
	double balance;
	string name_account;
public :
	BankAccount(double Balance, const string& Name_account) : balance(Balance), name_account(Name_account) {
	}
	bool deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposit successful. New balance : " << balance << endl;
			return true;
		}
		else {
			cout << "Deposit failed." << endl;
			return false;
		}
	}
	bool withdraw(double amount) {
		if (amount <= 0) {
			cout << "Withdraw failed! Amount must be positive" << endl;
			return false;
		}
		else if (amount > balance) {
			cout << "Withdraw failed! Insufficient Balance" << endl;
			return false;
		}
		else {
			balance -= amount;
			cout << "Withdraw Successful! New Balance : " << balance << endl;
			return true;
		}
	}
};

int main() {
	BankAccount account1(90000, "DucDNh");
	account1.deposit(-10);
	account1.deposit(100);
	account1.withdraw(-60);
	account1.withdraw(100000);
	account1.withdraw(30000);
	return 0;
}