///diameter of tree.cpp
//diameter is  maximum distance between 2 nodes .

#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node*left,*right;
    node(int d):data(d),left(NULL),right(NULL){}
};
node*createtree()///creating a tree
{
    node*root=NULL;
    int data;
    cin>>data;
    if(data==-1)
    {

        return root;
    }
    else{
        root=new node(data);
        root->left=createtree();
        root->right=createtree();
    }
    return root;
}
void postorder(node*root)
{
    //base case
    if(root==NULL)
    {

        return ;
    }
    //recursive case
    postorder(root->left);

    postorder(root->right);
    cout<<root->data<<" ";

}
void levelorder(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        auto x=q.front();
        q.pop();
    if(x!=NULL)
    {
            cout<<x->data<<" ";

        if(x->left!=NULL)
        {
            q.push(x->left);
        }
         if(x->left!=NULL)
        {
            q.push(x->left);
        }
    }
    else{
        cout<<endl;
        if(!q.empty)
        {
            q.push(NULL);
        }
    }
}


int main ()
{
    node*root=NULL;
    root=createtree();
    postorder(root);

    cout<<levelorder(root);
    return 0;
}


