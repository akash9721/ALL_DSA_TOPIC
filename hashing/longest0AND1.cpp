
     #include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    int sum=0;

     for(int i = 0; i < n; i++)
      arr[i] = (arr[i] == 0) ? -1 : 1;

     unordered_map<int,int> m;
     int presum=0,res=0;
     for(int i=0;i<n;i++)
     {
         presum+=arr[i];
         if(presum==sum)
            res=i+1;
         if(m.find(presum)==m.end())
         m.insert({presum,i});
         if(m.find(presum-sum)!=m.end())
            res=max(res,i-m[presum-sum]);
     }
     return res;


}

int main()
{
    //int arr[] = {5, 3, 9, -4, -6, 7, -1};
    //int arr[]={5,8,-4,-4,9,-2,2};
    int arr[]={0,1,0,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << ZeroSumSubarray(arr, n);
}


