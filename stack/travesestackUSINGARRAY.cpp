#include<bits/stdc++.h>
using namespace std;
struct stackis
{
    int *s;
    int size;
    int top;
      stackis(int x)
      {
          size=x;
          s=new int[size];
          top=-1;
      }
      void push(int x)
      {
          if(top==size-1)
            cout<<"overflow";
          top++;
          s[top]=x;
      }
      void show(stackis st)
      {
       for(int i=st.top;i>=0;i--)
       {
        cout<<st.s[i]<<" ";
       }
      }
      int pop()
      {
          if(top==-1)
            return -1;
          int res=s[top];
          top--;
          return res;
      }
      int peek()
      {
          if(top==-1)
            return -1;
          return s[top];
      }
      int sizeis()
      {
          return (top+1);
      }
      bool isempty()
      {
          return (top==-1);
      }
};
int main()
{
    stackis s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.show(s);
    cout<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.sizeis()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty();
}
