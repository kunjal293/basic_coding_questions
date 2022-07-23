// 2DArray.cpp
//printin array if input is did in the code
#include <iostream>
using namespace std;

int main() {

	int a[][500] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	int row , col ;
	cin>>row>>col;

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cin >> a[r][c];
		}
		cout << endl;
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}



	return 0;
}

