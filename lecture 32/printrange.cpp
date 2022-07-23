///diameter of tree.cpp
//diameter is  maximum distance between 2 nodes .
//input order:8,3,10,1,6,14,4,7,13,-1
#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
///insert in bst insert dta in bst uske root node ko return kar deta hai
node*insertinbst(node*root,int data)
{
    //base case
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }
    //recursive case
    if(root->data>data)
    {
        root->left=insertinbst(root->left,data);

    }
    else{
        root->right=insertinbst(root->right,data);
    }
    return root;
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
void printrange(node*root,int k1,int k2)
{
    //base case
    if(!root)
    {
        return;
    }
    //recursive case
    if(root->data>=k1 and root->data<=k2)
    {
        cout<<root->data<<" ";
    }
    printrange(root->left,k1,k2);
     printrange(root->right,k1,k2);
}
node*buildbst(){
node*root=NULL;
int data;
cin>>data;
    while(data!=1)
    {
    //data ko bst me insert kar do
    root=insertinbst(root,data);
    cin>>data;
    }
}
int main ()
{
    node*root=NULL;
    root=buildbst();
    preorder(root);
    inorder(root);
    postorder(root);
    printrange(root,5,10);


    return 0;
}

