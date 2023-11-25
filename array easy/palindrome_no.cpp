#include <bits\stdc++.h>
using namespace std;
int main()
{
    /* Palindrow Number
    Approched --
    step1 :- store the natural no another variable
    step2 :- reverse the natural no
    step3 :- check the dup to rev the if is true print 1 and if is false print 0
    step4 :- end  */

    int n = 121, dup = n;
    int rev = 0;

    while (n > 0)
    {
        int last = n % 10;
        rev = (rev * 10) + last;
        n = n / 10;
    }
    if (dup == rev)
        cout << 1;
    else
        cout << 0;
}