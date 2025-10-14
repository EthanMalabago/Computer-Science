#include <iostream>
#include <iomanip>

using namespace std;

const int NUMLOOP = 1000000; // large runtime for higher accuracy
unsigned int seed = 7;

double random(unsigned int &seed);

int main()
{
    double a, b, countIn, countOut;

    countIn = 0.0;
    countOut = 0.0;
    for (int i = 1; i <= NUMLOOP; i++)
    {
        a = random(seed);
        b = random(seed);

        if (sqrt(a * a + b * b) < 1.0)
            countIn++;

        else
            countOut++;
    }

    cout << endl;
    cout << fixed << setprecision(6);
    cout << "Estimate of pi: " << setw(8) << 4.0 * (countIn / NUMLOOP) << endl;
    cout << endl;

    return 0;
}

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647; // increased for higher accuracy and larger variety of numbers
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}