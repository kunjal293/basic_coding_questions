//upper case to lower case
//here we need to use char datatype "ch"
// there is no need to use int datatype as there is no need to print there ascii characters

#include <iostream>
using namespace std;

int main() {
    char ch;
	for(ch='a';ch<='z';ch++) {

		cout << ch << " ";

	}
	cout<<endl;
	for(ch='A';ch<='Z';ch++)
    {
      cout << ch << " ";

    }


	cout << endl;

	return 0;
}
