#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
      -------Count the Gigit of given number --------
      approch:
      step1:- init variable num store give number
      step2:- doing while loop until num > 0 them
          step2.1:- init variable lastno store remander of num devide by %10
          step2.2:- print lastno ----> last digit of given no.
          step2.3:- num devide into 10 and store num
      step3:- end task

  */
    int num;
    cout << "Enter any no under the 10 digit : ";
    cin >> num;
    while (num > 0)
    {
        int lastno = num % 10;
        cout << lastno << endl;
        num = num / 10;
    }
}