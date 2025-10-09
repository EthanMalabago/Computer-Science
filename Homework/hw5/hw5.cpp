/*
       Name: Ethan Malabago
 Assignment: hw5
   Due Date: 10/13/2025
Description: estimates pi using function random(seed) 
       File: hw5.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int NUMLOOP = 1000000;
unsigned int seed = 6;

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
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}

/*
Sample code:

ethan@Ethans-MacBook-Pro hw5 % ./hw5             

Estimate of pi: 3.147768

ethan@Ethans-MacBook-Pro hw5 %
*/