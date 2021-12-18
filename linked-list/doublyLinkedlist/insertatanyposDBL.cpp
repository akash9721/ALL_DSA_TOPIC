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

Node *insertatany(Node *head,int x,int pos){
      Node*temp=new Node(x);


      if(pos==1)
      {
          temp->next=head;
          head->prev=temp;
          temp->prev=NULL;
          return temp;
      }
       Node*p=head;
       for(int i=1;i<=pos-2 && p;i++)
       {
           p=p->next;
       }
       if(p==NULL)
        return head;
      if(p->next==NULL)
        {
            p->next=temp;
            temp->prev=p;
            return head;
        }
       temp->next=p->next;
       p->next->prev=temp;
       p->next=temp;
       temp->prev=p;
       return head;


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
	show(head);
	cout<<endl;

	head=insertatany(head,100,3);
	//head=insertatany(head,200,4);
	show(head);
	return 0;
}





