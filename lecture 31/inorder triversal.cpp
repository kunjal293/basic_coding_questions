
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
int main ()
{
    node*root=NULL;
    root=createtree();
    inorder(root);


    return 0;
}

