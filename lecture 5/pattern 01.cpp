// Pattern01.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, no, i;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{
		// Work
		if (row % 2 == 0) {
			no = 0;
		}
		else {
			no = 1;
		}

		for (i = 1 ; i <= row ; i++) {
			cout << no << " ";
			no = 1 - no;
		}

		cout << '\n';
	}

	return 0;
}

