// CelsiusTable.cpp

//here we need three variables from user so steps initial and final value
//so we can use for loop running from 0 to 300 temperature
//now in formula f = initial value and c can be caluculted by equating
//for f value we can apply a loop for(f=0;f<=300;f+step)this can be applied
#include <iostream>
using namespace std;

int main() {

	int initial, final, step, f, c;

	cin >> initial >> final >> step;

	f = initial;
	while (f <= final) {
		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;

		f = f + step;
	}


	return 0;
}

