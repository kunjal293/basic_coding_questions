#include<iostream>
using namespace std;
class Vector{
public:
    int *arr;
    int cs;
    int ms;
    vector(int s=2){
    arr=new int [s];
    cs=0;
    ms=s;
}
    void push_back(int d)
    {
        if(cs=ms)
        {
            int *oddarr=arr;
            int oldms=ms;
            arr=new int[2*ms];
            ms *=2;
            for(int i=0;i<oldms;++i)
            {
                arr[i]=oddarr[i];
            }
            delete oddarr;
        }
        arr[cs]=0;
        cs++;
    }
    void pop_back()
    {
        if(cs>0)
        {
            cs--;
        }

    }
   int  size()
    {
        return cs;

    }
    int capacity ()
    {
        return ms;
    }


};
int main ()
{
    int ms,cs;
cout<<ms<<cs;
return 0;

}
// ms is maximum capacity
//arr is the array. one more pointer should be declared
