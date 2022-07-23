// PrintAlphabets.cpp
// here we can print upper case alphabets
//ascii numbers are not needed as there is no need to print the table
#include <iostream>
using namespace std;

int main() {

	char ch = 'A';
	while (ch <= 'Z') {

		cout << ch << " ";

		ch = ch + 1;
	}

	cout << endl;

	return 0;
}

