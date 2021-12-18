#include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> s;
    int presum=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==0)
            return true;
        if(s.find(presum)!=s.end())
            return true;
        s.insert(presum);
    }
    return false;

}

int main()
{
    //int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int arr[] = {15,-2,2,-8,1,7,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << ZeroSumSubarray(arr, n);
}
