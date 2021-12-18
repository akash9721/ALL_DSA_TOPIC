

// TXT=ABCABCD
//PATT=ABCD         OP=3

#include<bits/stdc++.h>
using namespace std;
void  stringserching(string txt,string patt)
{
    int m=txt.length();
    int n=patt.length();
    for(int i=0;i<=m-n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(patt[j]!=txt[i+j])
            {
                break;
            }
        }
        if(j==n)
            cout<<i<<" ";
    }
}
int main()
{
    string txt;
    cout<<"enter text :";
    getline(cin,txt);
    string patt;
    cout<<"enter pattern :";
    getline(cin,patt);
    stringserching(txt,patt);

}
