//7 10 4 10 6 5 2
//output  10 6 5 2
//last element in array is always a leader

#include<bits/stdc++.h>
using namespace std;
void leader(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
         int flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<a[i]<<" ";
        }
    }

}
void leader2(int a[],int n)
{
    int currldr=a[n-1];
    cout<<currldr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>currldr)
        {
            currldr=a[i];
            cout<<currldr<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //leader(a,n);
    leader2(a,n);


}
