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

Node *insertatbeg(Node *head,int x){
      Node*temp=new Node(x);
      if(head==NULL)
        return temp;
      temp->next=head;
      head->prev=temp;
      temp->prev=NULL;
      return temp;

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
	head=insertatbeg(head,100);
	head=insertatbeg(head,200);
	show(head);
	return 0;
}



