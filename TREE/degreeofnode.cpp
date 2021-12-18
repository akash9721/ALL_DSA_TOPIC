
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node*left;
    struct node*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int sum(node*root)
{
    if(root==NULL)
        return 0;
    else
        return sum(root->left)+sum(root->right)+root->key;
}
int degof2(node*root)
{
    int x,y;
    if(root!=NULL)
    {
        int x=degof2(root->left);
        int y=degof2(root->right);
        if(root->left && root->right)
            return x+y+1;
        else
            return x+y;
    }
    return 0;

}
int degof1(node*root)
{
    int x,y;
    if(root!=NULL)
    {
        int x=degof1(root->left);
        int y=degof1(root->right);
        if((root->left && root->right==NULL)||(root->left==NULL && root->right))
            return x+y+1;
        else
            return x+y;
    }
    return 0;

}
int degof0(node*root)
{
    int x,y;
    if(root!=NULL)
    {
        int x=degof0(root->left);
        int y=degof0(root->right);
        if(root->left==NULL && root->right==NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;

}
int degof1and2(node*root)
{
    int x,y;
    if(root!=NULL)
    {
        int x=degof1and2(root->left);
        int y=degof1and2(root->right);
        if(root->left || root->right)
            return x+y+1;
        else
            return x+y;
    }
    return 0;

}
void sumofnodedata2(node*root)
{
   if(root==NULL)
    return;
   queue<node*> q;
   q.push(root);
   int sum=0;
   while(q.empty()==false)
   {
       node*curr=q.front();
       q.pop();
       sum=sum+curr->key;
       if(curr->left!=NULL)
        q.push(curr->left);
       if(curr->right!=NULL)
        q.push(curr->right);
   }
   cout<<sum;

}
int noofnodes(node*root)
{
    if(root==NULL)
        return 0;
    else
        return noofnodes(root->left)+noofnodes(root->right)+1;
}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(400);
    root->left->left->right=new node(4);
    root->left->left->right->left=new node(34);
    root->left->left->right->right=new node(384);
    root->right->left=new node(40);
    root->right->right=new node(50);
     root->right->right->left=new node(5);
    cout<<degof2(root);
    cout<<endl;
    cout<<degof1(root);
    cout<<endl;
    cout<<degof0(root);
    cout<<endl;
    cout<<degof1and2(root);
    cout<<endl;
     sumofnodedata2(root);
     cout<<endl;
     cout<<sum(root);
     cout<<endl;
     cout<<noofnodes(root);
}


