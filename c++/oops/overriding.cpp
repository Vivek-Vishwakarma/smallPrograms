#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void fun()
    {
        cout << "This is parent function" << endl;
    }
};
class Child : private Parent
{
public:
    void fun()
    {
        cout << "This is child function";
    }
};

int main()
{
    system("cls");
    Parent p;
    p.fun();
    Child c;
    c.fun();
    return 0;
}