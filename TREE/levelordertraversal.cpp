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
void printLevel(Node*root)
{
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
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

	printLevel(root);
}
