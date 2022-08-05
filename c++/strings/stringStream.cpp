#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str = "hello I am person";
    stringstream s(str);
    string word;
    while (s >> word)
    {
        // cout << word << " ";
    }
    cout << word;
    return 0;
}