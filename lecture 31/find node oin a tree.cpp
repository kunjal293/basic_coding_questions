///finding a node in the tree
//diameter is  maximum distance between 2 nodes .
//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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
int diameter (node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    //1.diameter via root node//op1 is option 1
    int op1=diameter(root->left)+diameter(root->right);
    //2.diameter only excits in lst
    int op2=diameter(root->left);
    //3. diameter only excists in rst
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));
}
node* searchbt(node*root,int key)
{
    //base case
    if(root==NULL);
    {
        return 0;
    }
    //recursive case
    if(root->data==key)
    {
        return root;
    }
    node*left=searchbt(root->left,key);
    if(left!=NULL)
    {
        return left;
    }
    node*right=searchbt(root->right,key);
    //
    return right;
}
int main ()
{
    node*root=NULL;
    root=createtree();
    postorder(root);

   node*x=searchbt(root,13);
   if(x!=NULL)
   {
       cout<<"key found"<<endl;
   }
   else{
    cout<<"key not found"<<endl;
   }
    return 0;
}


