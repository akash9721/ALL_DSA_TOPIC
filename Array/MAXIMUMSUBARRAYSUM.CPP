#include<bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n)
{
    int max_sum=INT_MIN;
    int mxsum=0;

    int sum=0;

    int min_sum=INT_MAX;
    int mnsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        mxsum+=a[i];
        if(mxsum<0)
        {
            mxsum=0;
        }
        max_sum=max(max_sum,mxsum);

        mnsum+=a[i];
        if(mnsum>0)
        {
            mnsum=0;
        }
        min_sum=min(min_sum,mnsum);
    }
   /* cout<<"the maximum sum is "<<max_sum<<endl;
    cout<<"the total max sum is "<<mxsum<<endl;

     cout<<"the sum is "<<sum<<endl;

     cout<<"the minimum sum is "<<min_sum<<endl;
    cout<<"the total min sum is "<<mnsum<<endl;*/

    if(sum==min_sum)
        return max_sum;
    return max(max_sum,(sum+min_sum));
}
int main()
{
    int a[]={5,-3,-2,6,-1,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the maimum circular subarray sum :";
   cout<< maxsum(a,n);
}
