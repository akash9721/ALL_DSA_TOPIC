#include<iostream>
using namespace std;
int main()
{
	int i,size,number,position;

	cout<<"enter the size of array : ";
	cin>>size;
	int array[size];

	for(i=0;i<=size;i++)
	{
	   cout<<"enter the array ["<<i<<"]: ";
	   cin>>array[i];
	}
	cout<<"enter the number which u Wants to insert : ";
	cin>>number;
	cout<<"enter the position : ";
	cin>>position;
	{
		for(i=size; i>position; i--)

		 array[i] = array[i-1];


	array[i] = number;
    size++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<size; i++)
        cout<<array[i]<<"  ";
    cout<<endl;
    }

return 0;
}
