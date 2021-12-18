
#include<bits/stdc++.h>
using namespace std;
class shape
{
protected:
    float l;
public:
    void getdata()
    {
        cout<<"enter the length: ";
        cin>>l;
    }
    virtual float calculatearea()=0;
};
class square:public shape
{
public:
    float calculatearea()
    {
        return l*l;
    }
};
class circle:public shape
{
public:
    float calculatearea()
    {
        return 3.14*l*l;
    }
};

int main()
{
    square s;
    circle c;
    s.getdata();
    cout<<"area of square is: ";
    cout<<s.calculatearea();
    cout<<endl;
    c.getdata();
    cout<<"area of circle is: ";
    cout<<c.calculatearea();
}
