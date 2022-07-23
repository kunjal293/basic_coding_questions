// CheckUpperAndLowerCase.cpp
//upper case to lower case
//here we need to use char datatype "ch"
// there is no need to use int datatype as there is no need to print there ascii characters
#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch >= 'a' && ch <= 'z') {
		cout << "Lowercase" << endl;
	}
	else {
		cout << "Upper Case" << endl;
	}

	return 0;
}

