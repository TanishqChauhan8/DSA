#include<iostream>
using namespace std;

class sum
{
    int s;
    public:
    sum(const sum &ob)
    {
      s=ob.s;
    }

    sum()
    {
      s=20;
    }
    void display()
    {
        cout<<"The sum is "<<s<<endl;
    }
};

int main()
{
 sum y;
 y.display();
 sum x(y);
 x.display();
 return 0;
}