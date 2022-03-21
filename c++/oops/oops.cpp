#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, d, i;
    int x[8] = {0};
    cout << "\n Enter the IP addresses seperated by space: ";
    cin >> a >> b >> c >> d;
    cout << "The IP address is " << a << ", " << b << ", " << c << ", " << d << endl
         << endl;
    for (i = 0; i < 8; i++)
    {
        x[7 - i] = a % 2;
        a = a / 2;
    }
    if (x[0] == 0)
        cout << "It is a Class A IP Address";
    else if (x[0] == 1 && x[1] == 0)
        cout << "It is a Class B IP Address";
    else if (x[0] == 1 && x[1] == 0)
        cout << "It is a Class B IP Address";
    else if (x[0] == 1 && x[1] == 1 && x[2] == 0)
        cout << "It is a Class C IP Address";
    else if (x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 0)
        cout << "It is a Class D IP Address";
    else if (x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1)
        cout << "It is a Class E IP Address";
    getch();
}
