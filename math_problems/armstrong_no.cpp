#include <bits/stdc++.h>
using namespace std;
int Armstrong_Number(int n)
{
    int ck = n;
    int sum = 0;
    while (n > 0)
    {
        int temp = n % 10;
        sum = (temp * temp * temp) + sum;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n = 153;
    int temp = Armstrong_Number(n);
    if (n == temp)
        cout << "Yes ArmStrong Number";
    else
        cout << "Not ArmStrong Number";
}