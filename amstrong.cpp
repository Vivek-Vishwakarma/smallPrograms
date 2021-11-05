#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    int original = n;
    while (n>0)
    {
        int lastDigit = n%10;
        sum += lastDigit*lastDigit*lastDigit;
        n=n/10;
    }
    if (sum == original){
        cout << "its a amstrong no.";
    }
    else{
        cout<<"not amstrong";
    }
    return 0;
}