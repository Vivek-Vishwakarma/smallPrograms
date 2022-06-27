#include <bits/stdc++.h>
using namespace std;
class Account
{
public:
    int salary = 600;
};
// single inheritance
class Programmer : public Account
{
public:
    int bonus = 50;
};
// Multi Level Inheritance
class Computer : public Programmer
{
public:
    int ram = 8;
};
// Multiple Inheritance
class a
{
public:
    a()
    {
        cout << "a";
    }
};
class b
{
public:
    b()
    {
        cout << "b";
    }
};
class c : public a, public b
{
public:
    c()
    {
        cout << "c";
    }
};

int main(void)
{
    system("cls");
    Computer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    cout << "Ram: " << p1.ram << endl;
    c z;
    return 0;
}