#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node*right,*left;
    node(): left(NULL),right(NULL){}
};

class tries
{
public:
    node*root;
    tries()
    {
        root=new node();

    }
    void insert(int val)
    {
        int x=1;
        node*temp=root;
        for(int i=31;i>=0;i--)
        {
            int bit_val=((x<<i)&val)>0?1:0;
            if(bit_val==1)
            {
                if(temp->right)
                {
                    temp=temp->right;
                }
                else
                {
                    temp->right=new node();
                    temp=temp->right;
                }
            }
            else
            {
                if(temp->left)
                {
                    temp=temp->left;
                }
                else
                {
                  temp->left=new node();
                  temp=temp->left;
                }
            }
        }
        temp->val=val;

    }
    int query(int x)
    {
        int y=1;
        node*temp=root;
        for(int i=31;i>=0;--i)
        {
            int bit_val=((y<<i)&x)>0?1:0;
            if(bit_val==1)
            {
                if(temp->left)
                {
                    temp=temp->left;
                }
                temp=temp->right;
            }
            else
            {
                if(temp->right)
                {
                    temp=temp->right;
                }
                else{
                temp=temp->left;
                }
            }
        }
        return x^temp->val;
    }
   int  maxxorpair(int *a,int n)
    {
        int ans=INT_MIN;
        for(int i=0;i<n;++i)
        {
            cout<<"insert :"<<a[i]<<endl;
            insert (a[i]);
        int v=  query(a[i]);
        ans=max(ans,v);
        }
        return ans;
    }
};
int main ()
{
    tries t;
    int a[]={5,4,2,3};
    int n=sizeof(a)/sizeof (int);
    cout<<t.maxxorpair(a,n)<<endl;
    return 0;
}

