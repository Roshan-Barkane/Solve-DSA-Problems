#include <bits/stdc++.h>
using namespace std;
void patter10()
{
    int n = 3;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patter11()
{
    int n = 5;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            star = 0;
        else
            star = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << star;
            star = 1 - star;
        }
        cout << endl;
    }
}
void patter12()
{
    /*int n = 8;
    int u;
    for (int i = 1; i <= n - 1; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
            u = j;
        }
        for (int j = 1; j < 2 * n - (2 * i + 1); j++)
        {

            cout << " ";
        }

        int t = u;
        for (int j = 1; j <= i; j++)
        {
            cout << t;
            t--;
        }
        cout << endl;
    }*/
    int n = 5;
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // element
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // element
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // element
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void patter13()
{
    int n = 3;
    int inc = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << inc << " ";
            inc += 1;
        }
        cout << endl;
    }
}
void patter14()
{
    int n = 3;

    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void patter15()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = n; j > i; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void patter16()
{
    int n = 3;
    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch = 'A' + i;
    }
}
void patter17()
{
    int n = 6;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        // add space area
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // print charector
        char ch = 'A';
        int brackpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= brackpoint)
                ch++;
            else
                ch--;
        }
        // add space between safa area
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void patter18()
{
    int n = 3;
    char ch = 'E';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {

            cout << ch << " ";
        }
        cout << endl;
    }
}
void patter19()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' + n - 1; ch >= (n + i) / 2; ch--)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void patter20()
{
    int n = 5;
    int inis = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
    // bottom side print patters
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}
void patter21()
{
    int n = 4;
    int inis = 8;
    // bottom side print patters
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
}
void patter22()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void patter23(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter any side : ";
    cin >> n;
    patter23(n);
    return 0;
}