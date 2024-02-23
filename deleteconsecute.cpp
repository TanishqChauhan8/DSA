#include<iostream>
using namespace std;

class consecutive
{
    public:
    consecutive()
    {
        string str;
        cout<<"Enter the string : ";
        getline(cin,str);
        for(int i=0; i<str.length() ;i++)
        {
            if(str[i]!=str[i+1])
             cout<<str[i];
        }
    }
};

int main()
{
consecutive ob;
return 0;
}