// AppendStrings.cpp
//
#include <iostream>
using namespace std;
int length(char *a) {

	for (int i = 0; a[i] != '\0'; ++i)
	{

	}
	return i;
}


void AppendStrings(char *a, char *b) {
	int lena = length(a);
	int lenb = length(b);

	int i = lena;
	int j = 0;
	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {

	char a[] = "Hello";
	char b[] = "World";

	cout << a << endl;

	AppendStrings(a, b);
	cout << a << endl;


	return 0;
}

