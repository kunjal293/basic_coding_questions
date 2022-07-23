///balanced tree or not

#include<iostream>
#include<cmath>
using namespace std;
class node
{
public:
    int data;
    node*left,*right;
    node(int d):data(d),left(NULL),right(NULL){}
};
node *insertInBST(node* root,int data){
    // base case
    if(root==NULL){
        root=new node(data);
        return root;
    }
    // recursive case
    if(root->data >data){
        root->left=insertInBST(root->left,data);
    }
    else{
        root->right=insertInBST(root->right,data);
    }
node *buildBST(){
    node* root=NULL;
    int data;
    cin>>data;
    while(data !=-1){
        // DATA ko bst mein insert krdo
        root=insertInBST(root,data);
        cin>>data;
    }

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
    cout<<root;

}
class linkedlist{
public:
    node*head;
    node*tail;
    };
    linkedlist bstoll(node*root)
    {
        //base case
        if(!root)
        {
            linkedlist l;
            l.head=l.tail=NULL;
            return l;
            l.head=l.tail=root;
            return l;
        }
        else if(root->left and !root->right)
        {
            linkedlistleft=bstoll(root->left)
            linkedlist left=bstoll(root->left)
            left.tail->right=root;
            l.head=left.head
            l.tail=root;
            return l;
        }
        else{
            //dono last and rst present hai
            linkedlist left=bstoll(root->left)
            linkedlist right=bstoll(root->right);
            left.tail->right=root;
            root->right=right.head;
            l.tail=right.tail;
            return l;
        }
    }

int height (node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    int left_height=height(root->left);
    int right_height=height(root->right);
    return max(left_height,right_height)+1;
}
bool isbalanced(node*root)
{
    //base case
    if(!root)
    {   pair p;
        p.height=0;

        p.balanced=true;
        return p;
    }
    //recursive case
    int left_height=height(root->left)
    int right_height=height(root->right)
    if(abs(left_height-right_height)<=1
        and isbalanced(root->left)
        and isbalanced(root->right))
    {
        return true;
    }
    else{
        return false;
    }
}
 pair balancedornot(node*root){
//base case
//recursive case
pair left=balancedornot(root->left);
pair right=balancedornot(root->right);
//root node ka pair nikal lo
pair p:
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.hright)<=1
       and left.balanced
       and right.balanced){
        p.balanced=true;
       }
       else{p.balanced=false;
       }
       return p;

};
bool isbst(node*root,int mi=INT_MIN,int mx=INT_max)
{
    //base case
    if(!root)
    {
        return true;
    }
    //recursive case
    if(root->data>=mi and root->data<=mx
       and isbst(root->left,mi,root->data)
       and isbst(root->right,root->data,mx))
       {
           return true;
       }
       return false;
}
node*createbst(int *a,int s,int e)
{
    //base case
    if(s>e)
    {
        return NULL;
    }
    //recursive case
    int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=createbst(a,s,mid-1);
    root->right=createbst(a,mid+1,e);
    return root;
}
int main ()
{
    node*root=NULL;
    root=buildtree(0,sizeof(pre)/sizeof(int)-1);
    postorder(root);

    cout<<height(root);
    if(isbalanced(root))
    {
        cout<<"balanced"<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
    pair ans=balancedornot(root)
    cout<<"balanced";
    if(isbst(root))
    {
        cout<<"bsthai"<<endl;
    }
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int);
    node*root=createbst(a,0,n-1);
    preorder(root);

    return 0;
}





