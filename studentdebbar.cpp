#include <iostream>
using namespace std;

class Result;
class Student
{
    int n;
    int rollno[100], attend[100];
    string name[100];
public:
    void input()
    {
        cout << "Enter the Number of student : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the Name of the Student " << i + 1 << " : ";
            cin.ignore();
            getline(cin,name[i]);
            cout << "Enter the Roll No of student " << i + 1 << " : ";
            cin >> rollno[i];
            cout << "Enter the total Number of Class Attended by him: ";
            cin >> attend[i];
            cout<<endl;
        }
    }
    friend class Result;
};

class Result
{
    string debbar[100], eligible[100];
    int k = 0, x = 0, totallect,per;

public:
    void show(Student ob)
    {
        cout << "Enter the total Lecture : ";
        cin >> totallect;
        for (int i = 0; i < ob.n; i++)
        {
            cout << ob.name[i];
            per = (ob.attend[i] * 100) / totallect;
            cout << " is Debbar - ";
            if (per > 75)
            {
                eligible[k] =ob.name[i];
                cout << "NO" << endl;
                k++;
            }
            else
            {
                debbar[x] = ob.name[i];
                cout << "YES" << endl;
                x++;
            }
        }
        cout << "Debbar Student list - " << endl;
        for (int i = 0; i < ob.n; i++)
            cout << debbar[i] << endl;
        cout << "Eligible Students list - " << endl;
        for (int i = 0; i < ob.n; i++)
            cout << eligible[i] << endl;
    }
};

int main()
{
    Student ob;
    ob.input();
    Result ob1;
    ob1.show(ob);
    return 0;
}