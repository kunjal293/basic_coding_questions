//array sum using recursive function
#include <iostream>
using namespace std;

int ArraySum(int a[], int n) {
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		sum = sum + a[i];
	}
	return sum;
}
bool sort(int*a,int n)
{//1. base case
    if(n==0)
    {
        return true;
    }
    //2. rescursive function
    bool ischotasorted= sort(a+1,n-1);
     if(a[0]<=a[1]&& ischotasorted==true){
        //poora array sorted hai
        return true;
     }
     else {
        return false;
     }

int main() {

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	int ans = ArraySum(a, n);

	cout << "Sum is: " << ans << endl;

	return 0;
}

