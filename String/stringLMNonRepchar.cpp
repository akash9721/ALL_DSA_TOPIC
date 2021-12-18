#include<bits/stdc++.h>
using namespace std;
int LMRC(string str)
{
    char cnt[256]={0};
    for(int i=0;i<str.length();i++)
    {
        cnt[str[i]]++;
    }
    for(int i=0;i<str.length();i++)
    {
        if(cnt[str[i]]==1)
        return i;
    }
    return -1;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<"leftmost first non repeting character is :"<<LMRC(str);
}

