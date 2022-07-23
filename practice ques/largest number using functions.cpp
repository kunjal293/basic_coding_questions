// lagest and smallest number entered by user
#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b&& a>c)
    {
        return a;
    }
    else if(b>a&&b>c)
    {
        return b;
    }
    else(c>a&&c>b);
    {
        return c;
    }
}
int min (int a,int b,int c)
{
    if(a<b&&a<c);
    {
        return a;

    }
     if(b<a&&b<c);
    {
        return b;
    }
   if (c<a&&c<b);
    {
        return b;
    }

}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout <<"maximum number is: "<<max(a,b,c)<<endl;
cout<<"minimum number is : " <<min(a,b,c)<<endl;
return 0;
}

