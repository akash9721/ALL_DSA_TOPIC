#include<bits/stdc++.h>
using namespace std;
int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> s;
        for(int i=0;i<S.length();i++)
        {
            if(isdigit(S[i]))
             s.push((S[i])-'0');
             else
             {
                 float op1,op2;
                  op1=s.top();
                 s.pop();
                  op2=s.top();
                 s.pop();
                 switch(S[i])
                 {
                     case '+':
                     s.push(op2+op1);
                     break;
                      case '-':
                     s.push(op2-op1);
                     break;
                      case '*':
                     s.push(op2*op1);
                     break;
                      case '/':
                     s.push(op2/op1);
                     break;
                 }
             }
        }
        return s.top();
    }
int main()
{
    string S="3*5+6/2-4";
    cout<<evaluatePostfix(S);
}
