#include<iostream>
using namespace std;

class sum
{
    int a,b,s;

    public:
    sum(int a)
    {
     s=a;
    }

    sum(int a,int b)
    {
     s=a+b;    
    }

    void display()
    {
      cout<<"The sum is "<<s<<endl;
    }

    ~sum()
    {
     cout<<"destructor called"<<endl;
    }

};

int main(){
sum ob(10);
ob.display();
sum ob(30,20);
ob.display();
return 0;
}