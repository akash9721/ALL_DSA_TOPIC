#include<bits/stdc++.h>
using namespace std;
void reversee(string str)
{
    vector<string> temp;
    string st=" ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            temp.push_back(st);
            st=" ";
        }
        else
        {
            st+=str[i];
        }
    }
    temp.push_back(st);

    for(int i=temp.size()-1;i>=0;i--)
    {
        cout<<temp[i];

    }

}
int main()
{
    string ss="i like this book";
    reversee(ss);
}
