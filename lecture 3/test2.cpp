//eligible for voting using function.cpp
#include<iostream>
using namespace std;
int voting(int age)
{
    if(age<=18)
    {
        cout<<"not eligible for voting";
    }
    else{
      cout<<" eligible for voting";
    }
}
int main(){
int age;
cin>>age;
cout<<voting(age)<<endl;
return 0;
}
