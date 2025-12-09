/*
       Name: Ethan Malabago
 Assignment: lab10
   Due Date: 12/1/2025
Description: generates a vector of random doubles in [1.0, 5.0)
             prints it forwards and backwards by reversing the
             vector itself.
       File: lab10.cpp
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>

using namespace std;

const int SIZE = 6;
const double MIN = 1.0;
const double MAX = 5.0;

unsigned int seed = (unsigned int) clock();

double random(unsigned int& seed);
void fill_vector(vector <double> &vec);
void print_vector(const vector <double> &vec);
void reverse_vector(vector <double> &vec);

int main()
{
    vector <double> vec(SIZE);
    fill_vector(vec);
    print_vector(vec);
    reverse_vector(vec);
    print_vector(vec);

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

void fill_vector(vector <double> &vec)
{
    for (int i = 0; i < SIZE; i++)
        vec[i] = MIN + (MAX - MIN) * random(seed);
}

void print_vector(const vector <double> &vec)
{
    cout << fixed << setprecision(2);
    for (int i = 0; i < SIZE; i++)
        cout << setw(5) << vec[i] << " ";
    cout << endl;
}

void reverse_vector(vector <double> &vec)
{
    double temp_num;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp_num = vec[i];
        vec[i] = vec[SIZE - 1 - i];
        vec[SIZE - 1 - i] = temp_num;
    }
}

/*
Sample output:

ethan@Ethans-MacBook-Pro lab10 % ./lab10
 1.83  4.15  3.07  2.68  1.07  2.76
 2.76  1.07  2.68  3.07  4.15  1.83
ethan@Ethans-MacBook-Pro lab10 %
*/
