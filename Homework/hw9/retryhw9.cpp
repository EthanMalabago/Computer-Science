#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

const int MIN = 1;
const int MAX = 5;
const int ARRAYSIZE = 20;

unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245;
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}

int random_int(int min, int max)
{
    return int(min + (max - min + 1) * random(seed));
}

void fill_array(int a[])
{
    for (int i = 0; i < ARRAYSIZE; i++)
        a[i] = random_int(MIN, MAX);
}

void print_array(const int a[])
{
    for (int i = 1; i < ARRAYSIZE; i++)
    {
        cout << setw(3) << a[i];

        if (i % 5 == 0)
            cout << endl;
    }
}

int main()
{
    int a[ARRAYSIZE];

    fill_array(a);

    cout << endl;
    cout << "array: " << endl;


    return 0;
}
