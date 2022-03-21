#include <iostream>
using namespace std;
int main()
{
    int area = 1;
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    for (int i = 1; i < sizeof(height); i++)
    {
        for (int j = 1; j < sizeof(height); j++)
        {
            area = height[j] * i;
        }
    }
    cout << area;

    return 0;
}