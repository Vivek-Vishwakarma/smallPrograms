#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str = "hello";
    // getline (cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        swap(str[str.length()-1],str[0]);
    }
    cout << str;
    return 0;
}