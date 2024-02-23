#include<iostream>
using namespace std;

class sum
{
    int a,b;
    public:
    sum()
    {
        a=10;
        b=20;
    }

    sum(const sum &ob)
    {
        a=ob.a;
        b=ob.b;
    }
    
    void display()
    {
     
        cout<<"Value of a "<<a<<endl;
        cout<<"Value of b "<<b<<endl;
    }

    ~sum()
    {
        cout<<"Dstrouctor called"<<endl;
    }
};

int main()
{
    sum ob;
    ob.display();

    sum ob1(ob);
    ob1.display();
}