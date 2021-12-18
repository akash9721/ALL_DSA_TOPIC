#include<bits/stdc++.h>
using namespace std;
class abc
{
   public:
    int add(int a,int b)
   {
   	return a+b;
   }
   double add(int a,double b)
   {
       return a+b;
   }
   char add(char a)
   {
      return a;
   }
   int add(int a,int b,int c)
   {
       return a+b+c;
   }

};
int main()
{
	abc obj;
	cout<<obj.add(10,20)<<endl;
	cout<<obj.add(10,5.5)<<endl;
	cout<<obj.add('a')<<endl;
	cout<<obj.add(10,20,50)<<endl;

}
