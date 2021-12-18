//listen silent

#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
        return (s1==s2);

}

const int CHAR=256;
int strang(string s1,string s2)
{
    int cnt[CHAR]={0};
    if(s1.length()!=s2.length())
        return false;
    for(int i=0;i<s1.length();i++)
    {
        cnt[s1[i]]++;
        cnt[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(cnt[i]!=0)
            return false;
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(strang(s1,s2))
        cout<<"yes this is anagram";
    else
        cout<<"not this is not anagram";



}
