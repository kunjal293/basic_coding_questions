// ReverseString.cpp
// reverse the character entered
// get line is used for ingnoring white spaces cstring header is to be used
//we swap the first element and last element . swap keyword can be used

//so starting of array is i and j is (length of string -1)

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[100];
	cin.getline(a, 100);

	int len_a = strlen(a);

	int i = 0, j = len_a - 1;

	cout << a << endl;

	while ( i < j ) {
		swap(a[i], a[j]);
		i++;
		j--;
	}

	cout << a << endl;

	return 0;
}
