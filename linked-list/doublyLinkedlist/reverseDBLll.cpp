#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void show(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *insertatend(Node *head,int x){
      Node*temp=new Node(x);
      if(head==NULL)
        return temp;
       Node*curr=head;
       while(curr->next!=NULL)
       {
           curr=curr->next;
       }
       curr->next=temp;
       temp->prev=curr;
       return head;

}

Node*reversell(Node*head)
{
    if(head==NULL ||head->next==NULL)
        return head;
    Node*curr=head;
    Node*temp=NULL;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    return temp->prev;
}
int main()
{
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=insertatend(head,100);
	head=insertatend(head,200);
	show(head);
	cout<<endl;

	head=reversell(head);
	show(head);
	return 0;
}





