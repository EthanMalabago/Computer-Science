/*
       Name: Ethan Malabago
 Assignment: hw12
   Due Date: 11/20/2025
Description: 
       File: hw12.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

const int SIZE = 100;

unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed);

struct Point
{
    double x, y;
};

void fill_array(Point a[]);

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

void fill_array(Point a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        a[i].x = random(seed);
        a[i].y = random(seed);
    }
}

/*
Sample Output:


*/