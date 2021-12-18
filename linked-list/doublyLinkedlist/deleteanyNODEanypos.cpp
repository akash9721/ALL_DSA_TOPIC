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

      Node*p=head;
      if(pos==1)
      {
          temp->next=head;
          head->prev=temp;
          temp->prev=NULL;
          return temp;
      }
      else
      {
          Node*q=NULL;
          for(int i=0;i<pos-1 && p;i++)
          {
              q=p;
              p=p->next;
          }
          if(p)
          {
              temp->next=p;
              p->prev=temp;
              q->next=temp;
              temp->prev=q;
              return head;
          }
      }

}
Node*delanypos(Node*head,int pos)
{
    if(head==NULL)
    return NULL;

    Node*p=head;
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
        delete(p);
        return head;
    }
    else
    {
        Node*q=NULL;
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p->next==NULL)
        {
            p->prev->next=NULL;
            delete(p);
            return head;
        }
        if(p)
        {
            q->next=p->next;
            p->next->prev=q;
            delete(p);
            return head;
        }
    }
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


	head=insertatany(head,100,3);
	head=insertatany(head,200,1);
	show(head);
	cout<<endl;


	head=delanypos(head,4);
   // head=delanypos(head,4);
	show(head);
	return 0;
}





