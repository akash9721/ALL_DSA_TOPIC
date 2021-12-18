#include<bits/stdc++.h>
using namespace std;
class complexno
{
private:
    int a,b;
public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"+i"<<b;
    }
    complexno operator + (complexno c)
    {
        complexno temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};
int main()
{
    complexno c1,c2,c3;
    c1.getdata(5,4);
    c2.getdata(3,6);
    //c3=c1.operator+(c2);
    c3=c1+(c2);
    c3.showdata();
}
