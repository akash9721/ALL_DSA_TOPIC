//geeksforgeeks
#include<bits/stdc++.h>
using namespace std;
int lmsc(string str)
{
    for(int i=0;i<str.length();i++)
    {
        int flag=1;
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return i;

    }
    return -1;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<"leftmost first character is :"<<lmsc(str)<<endl;
}
