#include <iostream>

using namespace std;

int gcd(int a, int b);
double exponent(double x, int n);
int choose_k(int n, int k);

int main()
{
    int a, b;

    cout << endl;
    

    cout << choose_k(a, b) << endl;

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

int choose_k(int n, int k)
{
    if (k == 0)
        return 1;
    else
        return choose_k(n, ( (n - 1) / k ) + ( (n - 1) / (k - 1) ));
}