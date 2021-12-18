#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int k)
      {
          data=k;
          left=right=NULL;
      }
};
void printLevellinebyline(Node*root)
{

   if(root==NULL)
    return;
   queue<Node*> q;
   q.push(root);
   while(q.empty()==false)
   {
       int cnt=q.size();
       for(int i=0;i<cnt;i++)
       {
           Node*curr=q.front();
           q.pop();
           cout<<curr->data<<" ";
           if(curr->left!=NULL)
            q.push(curr->left);
           if(curr->right!=NULL)
            q.push(curr->right);
       }
       cout<<endl;
   }
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);

	printLevellinebyline(root);
}

