#include<bits/stdc++.h>
using namespace std;
const int MAX=26;
string missingchar(string str)
{
    bool store[MAX]={false};

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            store[str[i]-'A']=true;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            store[str[i]-'a']=true;
        }
    }

    string res="";
    for(int i=0;i<MAX;i++)
    {
        if(store[i]==false)
            res.push_back((char)(i+'a'));
    }
    return res;
}
int main()
{
    string str="akash kumar kashyap";
    cout<<missingchar(str);
}
