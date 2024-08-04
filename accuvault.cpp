#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class New_account_opening{
private: 
	vector<string> Name;
	vector<int> Age;
	vector<string>Aadhar_Number;
	vector<string>DOB;

public:

//function for getting the account holder detail for account opening;
	void add_details() {
		string name;
		int age;
		string aadhar_number;
		string dob;

		cout << "The name of person:" << " " << "\n";
		getline(cin, name);
		cout << "Enter the age of person:" << " " << "\n";
		cin >> age;
		cout << "Enter your aadhar Number:" << " " << "\n";
		getline(cin, aadhar_number);
		cout << "Enter your birthdate:" << " " << "\n";
		getline(cin, dob);
	}

};

int main() {
	New_account_opening account;
	account.add_details();
		return 0;
}


