// PrintReverse.cpp
#include <iostream>
using namespace std;

int main() {

	int a[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = n - 1 ; i >= 0 ; i--)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
