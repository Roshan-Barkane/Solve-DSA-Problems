#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a = 28, b = 42;
    int min = (a < b) ? a : b;
    int gcf;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcf = i;
        }
    }
    cout << gcf;
}