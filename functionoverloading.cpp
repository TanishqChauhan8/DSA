#include<iostream>
#include<string.h>
using namespace std;

class staticdemo()
{
    private:
    string s;
    int n;
    public:
    static void funcDemo(string s,int n);
    static void funcDemo(string s);
    static void funcDemo(int n,string s);
};

static void staticdemo::funcDemo(string s,int n)
{
 cout<<"Enter the string : ";
 getline(cin,s);
 cout<<"Enter the number of words upto where u want to trancuate : ";
 cin>>n;
  int w=0;

for(int i=0;i<s.length();i++)
{
    while(w!=n)
    {
    if(s[i]==" " && s[i+1]!=" ")
    w++;
    cout<<""<<s[i]<<endl;
    }
  }
}

static void staticdemo::funcDemo(string s)
{
 cout<<"Enter the string : ";
 getline(cin,s);
 int count=0;
 string p;
 p=strev(s);
 int w=0;
 for(int i=0;i<s.length;i++){
   if(p[i]==s[i]){
     
            w++;
     
 }
}
}

static void staticdemo::funcDemo(int n,string s)
{
 cout<<"Enter the string : ";
 grtline(cin,s);
 cout<<"Enter the number into which u want to chop the given string : ";
 cin>>n;
 for(int i=)

}

int main(){
staticdemo ob;
ob.funcDemo(string,int);
ob.funcDemo(string);
ob.funcDemo(int,string);
return 0;
}