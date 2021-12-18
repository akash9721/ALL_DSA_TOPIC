#include<bits/stdc++.h>
using namespace std;
bool matching(char a,char b)
{
    if((a=='('&& b==')') || (a=='['&& b==']') || (a=='{'&& b=='}'))
        return true;
    else
        return false;
}
bool parmatch(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
            s.push(str[i]);
        else if(str[i]=='}' || str[i]==']' || str[i]==')')
        {
           if(s.empty()==true)
            return false;
           s.pop();
        }
    }
    if(s.empty()==true)
        return true;
    else
        return false;
}
int main()
{
    string str="((a+b)*(c+d))";
    //string str=")";
    if(parmatch(str))
        cout<<"Balanced";
    else
        cout<<"Not balanced";
}
