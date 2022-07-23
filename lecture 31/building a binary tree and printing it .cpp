//creating a binary tree.cpp
//input :8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
#include<iostream>
using namespace std;
///////class node////
class node{
public:
    int data;
    node*right;
    node*left;
    node(int d):data(d),left(NULL),right(NULL){}
};
node*buildtree()
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
    root->left=buildtree();
    root->right=buildtree();
}
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
void inorder(node*root)
{
    //base case
    if(root==NULL)
    {
        return ;
    }
    //recursive case
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

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

int main ()
{
    node*root=NULL;
    root=buildtree();
    cout << "binary tree when preorder used: ";
    preorder(root);
    cout<<endl;
    cout<<"binary tree when inorder used: ";
    inorder(root);
     cout<<endl;
    cout<<"binary tree when postorder used :" ;
    postorder(root);
   cout<<endl;

    return 0;
}

