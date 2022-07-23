#include<iostream>
using namespace std;
int main() {
    int n;
    long long int p,c;

    cin >> n;
    cin >> p;
    bool dec=true;
    int a=0;
    if (n<=0 || n==1) {
        a=1;
    }
    for (int i=1;i<n;i++) {
        cin >> c;
        if (p==c) {
            a=1;
        }
        else if (p<c) {
            if (dec) {
                dec=false;
            }
            else {
                dec=false;
                a=0;
            }
        }
        else if (c > p) {
            if (dec) {
                a=0;
            }
            else {
                a=1;
                dec=false;
            }
        }

    }
    if(a==0){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    return 0;
}
