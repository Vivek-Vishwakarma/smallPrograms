#include<iostream>
 
using namespace std;

int fact(int n){
     if (n > 1) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}
int main()
{
    int n;
    cout << "Enter a number to calculate factorial :"  << endl;
    cin >> n;
    cout << fact(n);
    return 0;
}