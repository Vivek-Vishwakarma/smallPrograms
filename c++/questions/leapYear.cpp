#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the year to find leap or not : " <<endl;
    cin >> n;
    if (n%4 == 0)
    {
        cout << "its leap year";
    }
    else{
       cout << "not leap";
    }
    return 0;
}