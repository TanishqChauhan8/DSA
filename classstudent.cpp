#include <iostream>
#include <string>
using namespace std;

class student
{
private:
  string name;
  int rollno;
  int sub1, sub2, sub3;
  float per;

public:
  void setinfo()
  {
    cout << "Enter Name : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Enter Rollno : ";
    cin >> rollno;
    cout<<"Enter the marks in 3 subjects : ";
    cin>>sub1;
    cin>>sub2;
    cin>>sub3;
    }

  void showinfo()
  {
    cout << "\nName : " << name << endl;
    cout << "Roll no : " << rollno << endl;
    cout << "percentage : " << per << endl;
  }

  void calper()
  {
    int t;
    t = sub1 + sub2 + sub3;
    per = (t * 100) / 300;
    if(per>=90)
      cout<<"You got A grade";
    else if(per>=80)
      cout<<"You got B grade";
    else if(per>=60)
      cout<<"You got C grade";
    else if(per<=40)
      cout<<"You got D grade";
    else
      cout<<"You got F grade";
  }
};

int main()
{
  int rllno, i,n;
  cout<<"Enter the number of student : ";
  cin>>n;
  student st[n];
  for (i = 0; i < n; i++)
  {
    st[i].setinfo();
    st[i].calper();
    st[i].showinfo();
  }
  for (int i = 0; i < 2; i++)
  {
    st[i].showinfo();
  }
}
