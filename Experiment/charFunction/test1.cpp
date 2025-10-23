#include <iostream>
#include <iomanip>

using namespace std;

unsigned int seed = 20;

char random_char(char start, char end);
double random(unsigned int &seed);

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << setw(3) << random_char('a', 'z');

        if (i % 10 == 0)
            cout << endl;
    }

    cout << endl;

    return 0;
}

char random_char(char start, char finish)
{
    return char (int (start + (finish - start + 1) * random(seed)));
}

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}