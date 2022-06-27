#include <bits/stdc++.h>
using namespace std;

class student
{
    int rno;
    char name[10];
    double fee;

public:
    // Constructor / Default Constructor
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }

    void display()
    {
        cout << endl
             << rno << "\t" << name << "\t" << fee;
    }
};
class Point
{
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX() { return x; }
    int getY() { return y; }
};
class Copy {
private:
    int x, y;
 
public:
    Copy(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
 
    // Copy constructor
    Copy(const Copy& p1)
    {
        x = p1.x;
        y = p1.y;
    }
 
    int getX() { return x; }
    int getY() { return y; }
};
int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
    // Constructor called


    Point p1(10, 15);
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();


    Copy p1(10, 15); // Normal constructor is called here
    Copy p2 = p1;    // Copy constructor is called here
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

    return 0;
}