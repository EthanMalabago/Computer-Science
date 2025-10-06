#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

unsigned int seed = 6;

double random(unsigned int &seed);

int main()
{
    for (int i = 1; i <= 10; i++)
        cout << int(6 * random(seed)) << ", ";
    
    cout << endl;

    return 0;
}

double random(unsigned int &seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed) / MODULUS;
}
