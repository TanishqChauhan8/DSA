#include <iostream>
using namespace std;

class Employee
{
    int pan, tax, taxincome;
    static int i;
    string Name;

public:
    void inputinfo()
    {
        cin.ignore();
        cout << "Enter the Name of Employee ---> ";
        getline(cin, Name);
        cout << "Enter the pan Number ---> ";
        cin >> pan;
        cout << "Enter the Taxincome ---> ";
        cin >> taxincome;
        cout << endl;
    }
    void taxcalc()
    {
        if (taxincome <= 250000)
            tax = 0;
        else if (taxincome > 250000 && taxincome <= 300000)
        {
            tax = (taxincome - 250000) * 0.1;
        }
        else if (taxincome > 300000 && taxincome <= 400000)
        {
            tax = ((taxincome - 300000) * 0.2) + 5000;
        }
        else
        {
            tax = ((taxincome - 400000) * 0.3) + 25000;
        }
    }

    void displayinfo()
    {
        cout << "Name of the Employee " << i << " ---> " << Name << endl;
        cout << "PAN Number of Employee " << i << " ---> " << pan << endl;
        cout << "Tax income ---> " << taxincome << endl;
        cout << "Tax amount ---> " << tax << endl;
        i++;
        cout << endl;
    }
};
int Employee::i=1;

int main()
{
    int n;
    cout << "\nEnter the Number of Employees ---> ";
    cin >> n;
    Employee ob[n];
    for (int i = 0; i < n; i++)
    {
        ob[i].inputinfo();
        ob[i].taxcalc();
        ob[i].displayinfo();
    }
    return 0;
}