#include <iostream>
using namespace std;
void cntprime(int n)
{
    int cnt=0;
    int arr[n] = {0};
    int sum=0;

    for (int i = 2; i <n; i++)
    {
        if(arr[i]==0)
        {
        cout<<i<<" ";
        sum=sum+i;
        cnt++;
        }

        for (int j = i * i; j <= n; j+=i)
        {
            arr[j] = 1;
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
    cout<<sum;
}
int main()
{

    int n;
    cin>>n;
    cntprime(n);

}
