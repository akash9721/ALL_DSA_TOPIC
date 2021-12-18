#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
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
node*deleteany(node*head,int pos)
{
    if(head==NULL)
        return NULL;

    node*p=head;
    if(pos==1)
    {
        head=head->next;
        delete(p);
        return head;
    }
    else
    {
        node*q=NULL;
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            delete(p);
            return head;
        }

    }


}
int main()
{
    node*first=new node(10);
    first->next=new node(20);
    first->next->next=new node(30);
    first->next->next->next=new node(40);
    first->next->next->next->next=new node(50);
    first->next->next->next->next->next=new node(60);
    show(first);
    cout<<endl;

    first=deleteany(first,6);
    show(first);

}

