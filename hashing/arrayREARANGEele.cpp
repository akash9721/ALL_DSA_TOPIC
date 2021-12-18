#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
	{
	    // code here
	    vector<int> a;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>0)
	        {
	            a.push_back(arr[i]);
	        }
	    }
	    vector<int> b;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            b.push_back(arr[i]);
	        }
	    }
	    vector<int> x;
	    for(int i=0;i<n;i++)
	    {
	       if(i%2==0)
	       {
	           x.push_back(a[i]);
	       }
	       else
	       {
	           x.push_back(b[i]);
	       }
	    }
	    int si=x.size();
	    for(int i=0;i<si;i++)
        {
            arr[i]=x[i];
        }


	}
int main()
{
    int a[]={9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n=sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
