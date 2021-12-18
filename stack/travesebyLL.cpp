#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
      node(int d)
      {
          data=d;
          next=NULL;
      }
};
struct mystack
{
    node*top;
    int size;
       mystack()
       {
           top=NULL;
           size=0;
       }
       void push(int x)
       {

           node*temp=new node(x);
           temp->next=top;
           top=temp;
           size++;

       }
       int pop()
       {
           if(top==NULL)
           {
             cout<<"Stack is Empty"<<endl;
            return INT_MAX;
           }
           node*temp=top;
           int res=temp->data;
           top=top->next;
           delete(temp);
           size--;
           return res;
       }
       int sizeis()
       {
           return size;
       }
       bool isempty()
       {
           return (top==NULL);
       }
       int peek()
       {
           if(top==NULL)
           {
            cout<<"Stack is Empty"<<endl;
            return INT_MAX;
           }
           return top->data;
       }
       void show()
       {
           node*p=top;
           while(p!=NULL)
           {
               cout<<p->data<<" ";
               p=p->next;
           }
       }
};
int main()
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(30);
    s.push(40);
    s.show();
    cout<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(44);
    cout<<s.sizeis()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.peek()<<endl;

}
