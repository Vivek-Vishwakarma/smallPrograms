#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str = "hello";
    string test = "testing";
    // getline (cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        swap(str[str.length() - 1], str[0]);
    }
    //code for upper case 
    for (int i = 0; i < test.length(); i++)
    {
        test[i] = toupper(test[i]);
    }
    cout << test << endl;
    cout << str;
    return 0;
}