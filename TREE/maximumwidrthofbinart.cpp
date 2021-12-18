
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
int maxwidth(node*root)
{
  if(root==NULL)
    return 0;
  queue<node*> q;
  q.push(root);
  int res=0;
  while(q.empty()==false)
  {
      int si=q.size();
      res=max(res,si);
      for(int i=0;i<si;i++)
      {
          node*cur=q.front();
          q.pop();
          if(cur->left!=NULL)
            q.push(cur->left);
          if(cur->right!=NULL)
            q.push(cur->right);
      }
  }
  return res;
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
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    cout<<maxwidth(root);
    cout<<endl;
     sumofnodedata2(root);
}

