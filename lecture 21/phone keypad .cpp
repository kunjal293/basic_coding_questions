//phone keypad.cpp
// print character like write your name "kunjal" soyou need to press 5 number then 8 and so on
#include<iostream>
using namespace std;
char keys[][100]={
"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekeypad(char*in,char *out,int i,int j)


{
    // base case
    if(in [i]='/0')
    {



        out[j]=='/0';
        cout<<out<<endl;
        return 0;
    }

    //recursive case
    int digit =int[i]-'0';
    for (int k=0;key[digit][k]!=0;++k)
    {
        out[j]=key[digit][k]
        phonekeypad(in ,out,i+1,j+1);
    }

int main()
{
    char in[100];
    cin>>in ;
    char out[100];
    phonekeypad(in,out,0,0 );


 return 0;
}
