#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                res.push_back((char)(s[i]-'a'+n)%26+'a');
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                res.push_back((char)(s[i]-'A'+n)%26+'A');
            }
            else
                res.push_back(' ');

        }
        cout<<res;
    }
}
