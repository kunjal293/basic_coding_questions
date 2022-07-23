
#include <iostream>
using namespace std;


void decimaltoOctal(int deciNum)
{


    int octalNum = 0, countval = 1;
    int dNo = deciNum;

    while (deciNum != 0) {


        int remainder = deciNum % 8;


        octalNum += remainder * countval;


        countval = countval * 10;
        deciNum /= 8;
    }
    cout << octalNum << endl;
}

int main()
{
    int N;
    cin>>N;

    decimaltoOctal(N);
    return 0;
}
