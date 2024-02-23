#include <iostream>
using namespace std;

class sum
{
    int a=0, b=0, s;

public:
    sum(int a, int b)
    {
        this->a=a;
        this->b=b;
        s = a + b;
    }

    sum(sum &ob)
    {
        s = (ob.a +10)+ (ob.b+10);
    }

    void display()
    {
        cout << "The value of sum is " << s << endl;
    }
};

int
main()
{
    sum ob1(10,20);
    ob1.display();
    sum ob2(ob1);
    ob2.display();
    return 0;
}