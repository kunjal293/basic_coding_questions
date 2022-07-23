// CharacterArrayUserInput.cpp
//create a character arr with char a[];and char b[] this creates 2 arrays now user input from cin>>a >>b
//output can come fronm cout<<a <<b
#include <iostream>
using namespace std;

int main() {

	char a[100];
	char b[100];

	cin >> a; // cin ignores whitespace
	cin >> b;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	// for (int i = 0; i < 5 ; ++i)
	// {
	// 	cout << a[i] << endl;
	// }

	return 0;
}


