/*
       Name: Ethan Malabago
 Assignment: lab3
   Due Date: 10/06/2025
Description: generate 10,000 #'s in range [0, 5) and find average
       File: lab3.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int NUMLOOP = 10000;

unsigned int seed = 7;

double random(unsigned int &seed);

int main()
{
    double sum;

    sum = 0.0;
    for (int i = 1; i <= NUMLOOP; i++)
        sum += 5 * random(seed);

    cout << endl;
    cout << "Average of 10,000 random nums in [0, 5) is: " << sum / NUMLOOP << endl;
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

/*
Sample output:

ethan@Ethans-MacBook-Pro lab3 % ./lab3                  

Average of 10,000 random nums in [0, 5) is: 2.49058

ethan@Ethans-MacBook-Pro lab3 %
*/