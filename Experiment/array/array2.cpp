#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int SIZE = 20;
const int LOW = 5;
const int HIGH = 10;

unsigned int seed = 7u;

double random(unsigned int &seed);

int main()
{
    int a[SIZE];

    for (int i = 0; i <= SIZE; i++)
    {
        a[i] = int (LOW + (HIGH - LOW + 1) * random(seed));
    }

    int i = 0;
    while (a[i] != LOW)
        i++;

    cout << i << endl;

    return 0;
}

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}