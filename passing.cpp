#include<iostream>
using namespace std;

class ABCdemo
{
    private:
    int x,y;
    public:
    void setvalue(int a,int b)
    {
        x=a;
        y=b;
    }
    void showvalue()
    {
        cout<<"\nx="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
    ABCdemo changevalue(ABCdemo &tob)
    {
        tob.x=tob.x+10;
        tob.y=tob.y+20;
    }
};
    int main()
    {
        ABCdemo ob1,ob2;
        ob1.setvalue(5,6);
        ob1.showvalue();
        ob2.setvalue(7,8);
           ob2.changevalue(ob2);
        ob2.showvalue();

    }
