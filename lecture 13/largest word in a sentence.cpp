//largest string.cpp
//for largestword in the sentence we need length argument
//cin.getline is the function
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int curr_length=0;
    int maxlength=0;
    while(1)
    {

        if(arr[i]==' '||arr[i]=='\0')
        {
            if(curr_length>maxlength)
            {
                maxlength=curr_length;
            }
            curr_length=0;
        }
        curr_length++;
        if(arr[i]='\0')
            break;
        i++;
    }
    cout<<"maximum length"<<maxlength;
    return 0;
}
