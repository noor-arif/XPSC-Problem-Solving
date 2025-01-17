#include<bits/stdc++.h>
using namespace std;
class one
{
    public:
    int a;
    void getA()
    {
        cin>>a;
    }
};
class two
{
    public:
    int b;
    void getB()
    {
        cin>>b;
    }
};
class three
{
    public:
    int c;
    void getC()
    {
        cin>>c;
    }
};
class four : public one, public two, public three
{
    public:
    int d;
    void outD()
    {
        d = a + b + c;
        cout<<d<<endl;
    }
};


int main()
{
    four ob;
    ob.getA();
    ob.getB();
    ob.getC();
    ob.outD();
} 
