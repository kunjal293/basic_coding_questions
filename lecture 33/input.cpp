#include<iostream>
using namespace std;
int main() {

	  int a[5];
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }


	int sum=0;
	int i=0;
	while(sum>=0){
		sum+=a[i];
		if(sum<=0){
			break;
		}
		else{
			cout<<a[i]<<endl;
		}
		i++;
	}
	return 0;
}
