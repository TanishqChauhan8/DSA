#include<iostream>
using namespace std;
class student
{
 int Rnum,per,total=0;
 int sub[3];
 string Name;
 static int i;
 public:
 void inputinfo()
 {
  cout<<"Enter the Name of student : ";
  cin.ignore();
  getline(cin,Name);
  cout<<"Enter the Roll Number : ";
  cin>>Rnum;
  for(int j=1;j<4;j++){
  cout<<"Enter the marks in the subject "<<j<<" : ";
  cin>>sub[j];
  total=total+sub[j];
 }
 }   
void CalcPercentage()
{
 per=(total*100)/300;
 if()
}
}

int main(){

return 0;
}