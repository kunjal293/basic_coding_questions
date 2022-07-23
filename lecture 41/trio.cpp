#include<iostream>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;
class node{
public:
    char data;
    unordered_map<char,node*>h;
    bool isterminal;
    node(char d):data(d,isterminal(false){}

    };
    class tries
    {
        public:
        node*root;
        tries()
        {
            root=new node('/0');
        }
    void addword(char*word)
    {
        node*temp=root;
        for(int i=0;word[i]!='\0';++i)
        {
            char ch=word[i];
            if(temp->h.count(ch)==1)
            {
                temp=temp->h[ch];

            }
            else
            {
                temp->h[ch]=new node(ch);
                temp=temp->h[ch];
            }

        }
        temp->isterminal=true;
    }
    bool checkword(char*word)
    {
        node*temp=root;
        for(int i=0;word[i]!='/0';i++)
        {
            char ch=word[i];
            if(temp->h.count(ch)==0)
            {
                return false;

            }
            temp=temp->h[ch];
            }
            return temp->isterminal;

    }
void printall(string s,node*temp)
{
    //base case
    if(!temp)
    {
        return ;
    }
    //recursive case
    if(temp->isterminal==true)
    {
        cout<<s<<" ";
    }
    for(auto n:temp->h)
    {
        s.push_back(n.first);
        printall(s,n.second);
        s.pop_back();
    }
}
    void suggestions(char*word){
    node*temp=root;

        for(int i=0;word[i];++i)
        {
            char ch=word[i];
            if(temp->h.count(ch)==0)
            {
                return ;
            }
            temp=temp->h[ch];
        }
        string s(word);
        printall(s,temp)

    }
    };
int main ()
{


    tries t;
    t.addword("hell");
    t.addword("hello");
    t.addword("code");
    t.addword("coder");
   // while(1)
   // {
       //// char a[100];
        //cin>>a;
       // if(check.word(a))
       // {
       //   cout<<"word is present "<<endl;
      //  }
     //   else{
       //     cout<<"word is not present"<<endl;
       // }
   // }

    t.suggestions("cod");
}

