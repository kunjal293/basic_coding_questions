#include<iostream>
using namespace std;
class node{
public:
    string key;
    int value;
    node*next;
    node(string s,int val)
    {
        key=s;
        value=val;
        next=NULL;
    }

    };
class hashmap{
    int hashfun(string key){
    int ans=0;
    int mul=1;
    for(int i=0;i<key.length();i++)
    {
        ans+=(key[i]%ts)*(mul%ts);
        ans%=ts;
        mul*=37;
        mul%=ts;

    }
    return ans%ts;
}
void rehash()
{
    node**oldh=h;
    int oldts=ts;
    h=new node*[ts*2];
    ts=ts*2;
    cs=0;
    for(int i=0;i<ts;++i)
    {
        h[i]=NULL;

    }
    for(int i=1;i<ts;++i)
        {
            node*head=oldh[i];
            while(head)
            {
                string key =head->key;
                int value=head->value;
                insert(key,value);
                head=head->next;
            }
        }
}
public:
    node**h;
    int ts;
    int cs;
    hashmap(int s=7)

    {
        h=new node*[s];
        ts=s;
        cs=0;
        ///every bucket of node* should have null value by default and not garbage value.
        for (int i=0;i<ts;++i)
        {
            h[i]=NULL;
        }
    }
    void insert(string key,int value)//finds hash function and
    {
        int hash_indx

        =hashfun(key);
        node*n=new node (key,value);
        n->next=h[hash_indx];
        h[hash_indx]=n;
        cs++;
        float load_factor=cs/(ts*1.0);
        if(load_factor>=0.6)
        {
            rehash();

        }
    }
    void print ()
    {
        for(int i=1;i<ts;++i)
        {
            node*head=h[i];
            while(head)
            {
                cout<<"("<<head->key<<","<<head->value;
                string key =head->key;
                int value=head->value;
                insert( key,value);
                head=head->next;
            }
        }
    }
       node*search(string key)
        {
            int hash_indx=hashfun(key);
            node*head=h[hash_indx];
            while(head)
            {
                if(head->key==key)
                {
                    return head;
                }
                head=head->value;
            }
            return NULL;
        }
       int& operator [](string key)
        {
            node*s=search(key);
            if(s==NULL)
            {
                int g;
                insert(key,g);
                s=search (key);
                return s->value;
            }
            else{
                return s->value;
            }


        }


};
int main ()
{
    hashmap h(13);
    h.insert("kiwi",50);
    h.insert("apple",50);
    h.insert("papaya",60);
    h.insert("mango",40);
    // h.insert("guava",30);
   h["mango"]=40;

     h.print();
    return 0;
}
