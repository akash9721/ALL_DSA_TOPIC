#include<bits/stdc++.h>
using namespace std;
int lmsc(string str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
                return i;
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    cout<<"leftmost first character is :"<<lmsc(str);
}
