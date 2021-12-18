
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter row no"<<endl;
    int n;
    cin>>n; //n=21
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%4==0 ||(i==2 && j%4==0))
            cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<endl;
    }
}
