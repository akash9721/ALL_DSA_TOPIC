#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node*left;
    node*right;
     node(int k)
     {
         key=k;
         left=right=NULL;
     }
};
node*insert(node*root,int x)
{
   if(root==NULL)
    return new node(x);
   else if(root->key<x)
    root->right=insert(root->right,x);
   else if(root->key>x)
    root->left=insert(root->left,x);
   return root;
}
void inorder(node*root,int k,int&cnt)
{
    if(root!=NULL)
    {
        inorder(root->left,k,cnt);
        cnt++;
        if(k==cnt)
        {
        cout<<root->key;
        return;
        }
        inorder(root->right,k,cnt);
    }
}
int main()
{
    node*root=new node(40);
    root->left=new node(35);
    root->right=new node(50);
    root->right->left=new node(45);
    root->right->right=new node(60);

    root=insert(root,20);
    int k=3;
    int cnt=0;
    inorder(root,k,cnt);


}

