#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
bool areanagram(string patt,string txt,int i)
{
    int cnt[CHAR]={0};
    for(int j=0;j<patt.length();j++)
    {
        cnt[patt[j]]++;
        cnt[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++)
    {
        if(cnt[j]!=0)
            return false;
    }
    return true;
}
bool anagramserching(string txt,string patt)
{
    int m=txt.length();
    int n=patt.length();
    for(int i=0;i<=m-n;i++)
    {
        if(areanagram(patt,txt,i))
            return true;
    }
    return false;
}
int main()
{
    string txt;
    cout<<"enter text :";
    getline(cin,txt);
    string patt;
    cout<<"enter pattern :";
    getline(cin,patt);
    if(anagramserching(txt,patt))
        cout<<"Anagram Search found"<<endl;
    else
        cout<<"Anagram search is not found"<<endl;
}
