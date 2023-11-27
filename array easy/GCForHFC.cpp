#include <bits\stdc++.h>
using namespace std;
int main()
{

    /* Greatest Comman Factor
    approch :
    step 1:- find the min of two no of a and b.
    step 2:- run loop 1 to min and inside the loop follow step 3.
    step 3:- check a and b are divide i and remainder is 0 the store the i from anothe variable.
    */
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