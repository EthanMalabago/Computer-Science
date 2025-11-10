#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 20;
const int MIN = 1;
const int MAX = 5;

unsigned int seed = 7;

double random(unsigned int &seed);
int random_int(int low, int high);

int main()
{
    int a[SIZE];


    cout << endl;
    cout << 

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

int random_int(int low, int high)
{
    return int (low + (high - low + 1) * random(seed));
}