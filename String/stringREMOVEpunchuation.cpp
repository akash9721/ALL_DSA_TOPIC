#include<bits/stdc++.h>
using namespace std;
void removepu(string str,int len)
{
    for(int i=0;i<len;i++)
    {
        if(ispunct(str[i]))
        {
            str.erase(i--,1);
            len=str.length();
        }
    }
    cout<<str;
}
int main()
{
    string str="aka#@$s&h ku#@m@ar kash&%y#ap!";
    cout<<str<<endl;
    int len=str.length();
    removepu(str,len);
}
