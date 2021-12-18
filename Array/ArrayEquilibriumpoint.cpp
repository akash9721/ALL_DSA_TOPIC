#include<bits/stdc++.h>
using namespace std;
int eqpoint(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int lsum=0;
        for(int j=0;j<i;j++)
            lsum+=a[j];
        int rsum=0;
        for(int k=i+1;k<n;k++)
             rsum+=a[k];
        if(lsum==rsum)
            return true;


    }
    return false;

}
int main()
{
    int a[]={3,4,8,-9,20,6};
    int n=sizeof(a)/sizeof(a[0]);
    if(eqpoint(a,n))
        cout<<"true";
    else
        cout<<"false";
}

