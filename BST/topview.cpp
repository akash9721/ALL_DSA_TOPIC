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
void topview(node*root)
{
    map<int,int> mp;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        node*curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())
            mp[hd]=curr->data;
        q.pop();
        if(curr->left)
            q.push({curr->left,hd-1});
        if(curr->right)
            q.push({curr->right,hd+1});
    }
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
    topview(root);
}
