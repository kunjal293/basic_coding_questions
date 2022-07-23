#include<iostream>
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
void preorder(node*root)
{
    //base case
    if(root==NULL)
    {

        return ;
    }
    //recursive case
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
int main ()
{
    node*root=NULL;
    root=createtree();
    preorder(root);


    return 0;
}

