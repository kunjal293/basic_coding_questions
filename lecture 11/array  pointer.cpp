// ArrayPointer.cpp
//int *ptr;
//int arr[5];
// store the address of the first
// element of arr in ptr
//ptr = arr;
/// both the below statements are equivalent they both are used to take input from user in arrays
//cin >> *(arr + i)=  cin >> arr[i]; ;

#include <iostream>
using namespace std;

int main() {

	int b[] = {1, 2, 3, 4};
	int * p = b;

	for (int i = 0; i < 4; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << *(b + i) << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;

	return 0;
}



