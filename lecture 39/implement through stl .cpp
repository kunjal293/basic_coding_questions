#include<iostream>
#include<unordered_map>
using namespace std;
int main ()
{
    unordered_map<string ,int> h;
    //inserting
    //ist way
    h["mango"]=100;
    //2 nd way
    pair<string,int>p;
    p.first="pineapple";
    p.second=150;
    h.insert(p);///push function takes input from the user
    //3rd way
    h.insert(make_pair ("guava",50));
    ///4 th way
    h.insert({"apple",120});


   // 2.searching

    if(h.count("pineapple")==0)
    {//
        cout<<"not present"<<endl;
    }
    else{
        cout<<"present "<<endl;
    }

///printing full hashmaps
///print:for each loop
for(auto p:h)
{
    cout<<p.first<<" , "<<p.second<<endl;
}
    ///auto is the keyword that is used to decide by the =machine that which datatype is present
    //initialization is important for usinf auto keyword


///print the ,map alon hasmap
for (int i=0;i<h.bucket_count();++i)
{
    cout<<i<<"-->";
    for(auto it=h.begin(i);it!=h.end(i);it++)///
{
    cout<<it->first<<" ,"<<it->second<<endl;

}

}







        return 0;
}
