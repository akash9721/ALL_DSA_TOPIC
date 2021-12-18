#include<bits/stdc++.h>
using namespace std;
void stringfre(string str,int a[])
{
    for(int i=0;str[i];i++)
    {
        a[str[i]]++;
    }
    for(int i=0;str[i];i++)
    {
        if(a[str[i]])
        {
            cout<<str[i]<<"-->"<<a[str[i]]<<" "<<endl;
            a[str[i]]=0;
        }
    }
}

void cntstringlen(string str)
{
    int a[26]={0};
    for(int i=0;i<str.length();i++)
    {
        a[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            cout<<char(i+'a')<<"-->"<<a[i]<<endl;
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
   // int a[256]={0};
   // stringfre(str,a);

    cntstringlen(str);

}
