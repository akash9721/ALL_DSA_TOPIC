#include<bits/stdc++.h>
using namespace std;
const int MAX=26;
bool missingchar(string str)
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


    for(int i=0;i<MAX;i++)
    {
        if(store[i]==false)
            return false;
    }
    return true;
}
int main()
{
    //string str="akash kumar kashyap";
     string str = "The quick brown fox jumps over the lazy dog";
    if(missingchar(str))
        cout<<"string is anagram all char are present";
    else
    cout<<"string is not anagram all char are not present";

}

