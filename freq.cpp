#include<iostream>
#include<string>
using namespace std;

class freq
{
    public:
    freq()
    {
        string str;
        cout<<"Enter the string: ";
        getline(cin,str);
        int f=1;
        for(int i=0;i<str.length();i++)
        {
            for(int j=i+1;j<str.length();j++)
               {
                if(str[i]==str[j] && str[i]!=-1)
                {
                    f++;
                    str[j]=-1;
                }
               }
               if(str[i]!=-1 && str[i]!=' ')
               cout<<"\n "<<str[i]<<"="<<f;

               f=1;
        }
    }
};



int main()
{
freq ob;
return 0;
}