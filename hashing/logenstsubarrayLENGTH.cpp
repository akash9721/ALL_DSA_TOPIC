#include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n,int sum)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sumarr=0;
        for(int j=i;j<n;j++)
        {
            sumarr+=arr[j];
            if(sumarr==sum)
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;

}

int main()
{
    //int arr[] = {5, 3, 9, -4, -6, 7, -1};
    //int arr[]={5,8,-4,-4,9,-2,2};
    int arr[]={3,1,0,1,8,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << ZeroSumSubarray(arr, n,5);
}

