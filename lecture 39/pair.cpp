#include<iostream>
using namespace std;
int main ()
{
    ///initialization type1
    pair<int,int >p;
    p.first=10;
    p.second=200;
    cout<<p.first<<"," <<p.second<<endl;
     ///initialization type2
    pair<string , int >p1;
    p1.first="mango";
    p1.second=100;
    cout<<p1.first<<" ,"<<p1.second<<endl;
     ///initialization type3
    pair <int,int>p2(20,30);
    cout<<p2.first<<" '"<<p2.second<<endl;
    ///initialization type4
    pair<string,int>p3=make_pair("pinneapple",40);
    cout<<p3.first<<" ,"<<p3.second<<endl;
        return 0;
}
