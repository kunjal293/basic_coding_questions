// Pointers.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr = &a;

	float f = 1.11;
	float* fptr = NULL;
	fptr = &f;

	char c = 'A';
	char* cptr = &c;

	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;//returns address of bucket a
	cout << "aptr: " << aptr << endl << endl;//returns of bucket a
	//both second and third statements means the same

	cout << "f: " << f << endl;
	cout << "&f: " << &f << endl;//returns the adress of bucket f
	cout << "fptr: " << fptr << endl;//returns the address of bucket made
	cout << "fptr: " << *fptr << endl << endl;//this * is equivalent to first statement
	//that means this prints the item in f bucket

	cout << "c: " << c << endl;// returns name of cucket f
	 cout << "&c: " << &c << endl;//returns the address of bucket c but we donot use it becos c is char
	cout << "&c: " << (void*)&c << endl;//returns the address of bucket c
	cout << "cptr: " << (float*)cptr << endl << endl;//returns the address of bucket c
    return 0;
}








