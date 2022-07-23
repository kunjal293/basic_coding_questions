#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //type 1 declaring strings
    string str="hello world" ;
    cout<<str;
   //type 2 declaring strings
   string str1(5,'n')
   cout<<str<<endl;
   //type 3 declaring string if we need to print full sentence
   string str;
   getline(cin,str);
   cout<<str<<endl;
return 0;
}
