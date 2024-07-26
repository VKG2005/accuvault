#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class New_account_opening{
private: 
	vector<string> Name;
	vector<int> Age;
public:
//function for adding the accoungt holder deatail
	void add_details() {
		string name;
		int age;
		cout << "the name of person:" << "\n";
		getline(cin, name);
	}

};

int main() {
	New_account_opening account;
	account.add_details();
		return 0;
}


