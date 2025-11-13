#include <iostream>

using namespace std;

int gcd(int a, int b);
double exponent(double x, int n);

int main()
{
    int a = 36;
    int b = 54;

    cout << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else   
        return gcd(b, b % a);
}

double exponent(double x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * exponent(x, n - 1);
}