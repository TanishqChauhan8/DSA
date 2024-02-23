#include<bits/stdc++.h>
using namespace std;
class testdemo
{
    string str1="HELLO";
    string str2="WORLD";
    string str3;
    public:
    testdemo()
    {
        int i=0,ln;
        ln=str1.length()+str2.length();
        for(int i=0;i<str2.length();i++)
        {
            for(int j=((str2.length())-1);j>=0;j++)
                str2[i]=str2[j];
        }
        cout<<str2<<endl;
    }
};

int main()
{
 testdemo ob;
}