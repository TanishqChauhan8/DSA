#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        string str;
        cout << "Enter the  sentence : ";
        getline(cin, str);
        int w1, w2, s = 1;
        cout << "Enter the two words position you want to replace by the next charecter : ";
        cin >> w1;
        cin >> w2;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ' && str[i + 1] != ' ')
            {
                s++;
            }
            else if (s == w1 || s == w2)
            {
                if (str[i] == 'z')
                    str[i] = 'a';
                else if (str[i] == 'Z')
                    str[i] = 'A';
                else
                str[i]+=1;
            }
        }
        cout<<"Edited string is - "<<str;
    }
};

    int main()
    {
        A ob;
    }