#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    try
    {
        cout<<"enter two no"<<endl;
        cin>>a;
        cin>>b;
        if(b==0)
            throw 0;
        cout<<"the res is "<<a/b;
    }
    catch(int i)
    {
        cout<<"divison is not possible";
    }
}
