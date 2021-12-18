#include<bits/stdc++.h>
using namespace std;
string frequ(string s)
{
    string sss="";
    unordered_map<char,int> um;
    for(int i=0;i<s.length();i++)
    {
        um[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(um[s[i]]!=-1)
        {

           // cout<<s[i]<<"->"<<um[s[i]]<<endl;
          //cout<<s[i]<<" ";
            sss.push_back(s[i]);
            um[s[i]]=-1;

        }
    }
    return sss;
}
int main()
{
    string str="akash";
    cout<<frequ(str);
}
