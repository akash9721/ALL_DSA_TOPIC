//geeksforgeeks
// grges

#include<bits/stdc++.h>
using namespace std;
bool subseq(string s1,string s2,int l1,int l2)
{
    int j=0;
    for(int i=0;i<l1 & j<l2;i++)
    {
        if(s1[i]==s2[j])
            j++;
    }
    return (j==l2);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(subseq(s1,s2,l1,l2))
        cout<<"yes";
    else
        cout<<"no";

}

