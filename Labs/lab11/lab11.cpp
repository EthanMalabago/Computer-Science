#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>

using namespace std;

const int SIZE = 10;
unsigned int seed = (unsigned int) clock();



double random(unsigned int &seed);

int main()
{


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
