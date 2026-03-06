#include <iostream>
#include <string>

using namespace std;


class BankAccount {
	static int total_account;
	string name;
public :
	BankAccount(string Name) : name(Name) {
		total_account++;
		cout << name << " is opened ! Totall account : " << total_account << endl;
	}
	~BankAccount() {
		total_account--;
		cout << name << " is closed ! Total account : " << total_account << endl;
	}
};

int BankAccount :: total_account = 0;

void test() {
	BankAccount a("Subaru"), b("Suisei"), c("Miku");
}

int main() {
	test();
	return 0;
}