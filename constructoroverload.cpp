#include<iostream>
using namespace std;

class sum
{
    int a,b,s;
    public:
    sum()
    {
        a=10;
        b=20;
        s=a+b;
    }

    sum(int a,int b)
    {
        this->a=a;
        this->b=b;
        s=a+b;
    }

    void display()
    {
        cout<<"Sum is "<<s<<endl;
    }
};

int main()
{
    sum ob;
    ob.display();
    sum ob1(30,40);
    ob1.display();
}