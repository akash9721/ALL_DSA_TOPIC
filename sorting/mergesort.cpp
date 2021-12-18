/* #include<bits/stdc++.h>
using namespace std;
void mergee(int a[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=a[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            a[k++]=left[i++];
        }
        else
        {
            a[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        a[k++]=left[i++];
    }
    while(j<n2)
    {
        a[k++]=right[j++];
    }
}
void mergesort(int a[],int l,int h)
{
    while(l<h)
    {
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        mergee(a,l,mid,h);
    }
}
int main()
{
    int a[]={82,96,5,3,7,4};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0;
    int h=n-1;
    mergesort(a,l,h);
    for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}*/


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h){

    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {

    int a[]={10,5,30,15,7};
	int l=0,r=4;

	mergeSort(a,l,r);
	for(int x: a)
	    cout<<x<<" ";
}
