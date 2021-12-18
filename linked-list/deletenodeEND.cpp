#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
    node*prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void show(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node*deletenodeend(node*head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete(curr);
    return head;
}
int main()
{
    node*first=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
    node*temp3=new node(40);
    first->next=temp1;
    temp1->prev=first;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    show(first);
    cout<<endl;

    first=deletenodeend(first);
    show(first);

}

