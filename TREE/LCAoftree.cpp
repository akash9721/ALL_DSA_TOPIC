#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
     node(int val)
     {
         data=val;
         left=right=NULL;
     }
};
node*LCA(node*root,int n1,int n2)
{
    if(root==NULL)
        return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    node*lca1=LCA(root->left,n1,n2);
    node*lca2=LCA(root->right,n1,n2);

    if(lca1!=NULL && lca2!=NULL)
        return root;
    if(lca1!=NULL)
        return lca1;
    else
        return lca2;

}
int main()
{
    node*root=new node(5);
    root->left=new node(4);
    root->right=new node(3);
    root->left->left=new node(2);
    root->left->right=new node(7);
    root->left->right->left=new node(6);
    int n1=2;
    int n2=6;
    node*ans=LCA(root,n1,n2);
    cout<<"LCA is: "<<ans->data;

}
