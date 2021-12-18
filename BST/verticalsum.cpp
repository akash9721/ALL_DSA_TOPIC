#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
     node(int k)
     {
         data=k;
         left=right=NULL;
     }
};
void inorder(node*root,int hd,map<int,int> &mp)
{
    if(root!=NULL)
    {
        inorder(root->left,hd-1,mp);
        mp[hd]+=root->data;
        inorder(root->right,hd+1,mp);
    }
}
void verticalsum(node*root)
{
    map<int,int> mp;
    inorder(root,0,mp);
    for(auto x:mp)
    {
        cout<<x.second<<" ";
    }

}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    verticalsum(root);
}

