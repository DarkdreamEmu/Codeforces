#include<iostream>
#include<string>
using namespace std;
int removeZeros(int num)
{
    int n = 0;
    int i = 1;
    while (num)
    {
        int dig = num % 10;
        num /= 10;
        if (dig)
        {
            n += dig * i;
            i *= 10;
        }
    }
    return n;
}
int main()
{

    int  a, b, c = 0;

    while(cin >> a >> b)
    {
        c = a + b;

        a = removeZeros(a);
        b = removeZeros(b);
        c = removeZeros(c);


        if ( (a+b) == c )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
//Codeforces Beta Round #67 (Div. 2)
