// DefaultArguments.cpp
//functions add is created then it is called in int main
// creating a function
//add(1,2,3)// this state,ment here means that 1,2,3 are the values of three variables a b and c

#include <iostream>
using namespace std;

int add(int a = 0, int b = 0, int c = 0) {
	return a + b + c;
}

int main() {

	cout << add(1, 2, 3) << endl;
	cout << add(1, 2) << endl;
	cout << add(1) << endl;
	cout << add() << endl;

	return 0;
}
