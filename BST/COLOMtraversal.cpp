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
void vTraversal(node*root)
{
    map<int,vector<int>> mp;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        node* curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->data);
        q.pop();
        if(curr->left)
        q.push({curr->left,hd-1});
        if(curr->right)
        q.push({curr->right,hd+1});
    }
    for(auto x:mp)
    {
      for(int y:x.second)
      {
          cout<<y<<" ";
      }
      cout<<endl;
    }
}
int main() {

	node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    vTraversal(root);

    return 0;

}
