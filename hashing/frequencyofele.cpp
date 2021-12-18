
#include<bits/stdc++.h>
using namespace std;
void fre(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
                flag=0;
        }
        if(flag==0)
            continue;
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                cnt++;
        }
        cout<<a[i]<<" "<<cnt<<endl;
    }
}
int main()
{
    int a[]={10,20,10,30,40,20,10,50,60,60};
    int n=sizeof(a)/sizeof(a[0]);
    fre(a,n);
}


