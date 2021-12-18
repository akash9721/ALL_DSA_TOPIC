//input 1111122222
//output 132

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="1111122222";
    int k=3;

    char newstr[str.length()+1];
    strcpy(newstr,str.c_str());
    cout<<newstr;
    cout<<endl;

    int n=strlen(newstr);
    int cher=n/k;
    int arr[cher+1]={0};

    for(int i=0;i<n;i+=cher)
    {
        int cnt=0;
        while(cnt<cher)
        {
            arr[cnt]+=newstr[cnt];
            cnt++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
