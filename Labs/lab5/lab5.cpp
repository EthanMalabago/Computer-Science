/*
       Name: Ethan Malabago
 Assignment: lab5
   Due Date: 10/27/2025
Description: generates random integers in range [3, 7] and outputs
             the indexes where the elements are 4 and entire array
       File: lab5.cpp
*/

#include <iostream>

using namespace std;

const int SIZE = 50;
const int LOW = 3;
const int HIGH = 7;
const int VALUECHECK = 4;

unsigned int seed = 7u;

double random(unsigned int &seed);

int main()
{
    int a[SIZE];

    cout << endl << "Index when a[i] = " << VALUECHECK << ": " << endl;
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        a[i] = int (LOW + (HIGH - LOW + 1) * random(seed));

        if (a[i] == VALUECHECK)
            cout << i << ' ';
    }

    cout << endl;
    cout << endl << "All values of array a: " << endl;
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << ' ';

        if ((i + 1) % 10 == 0)
            cout << endl;
    }

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
Sample output:

ethan@Ethans-MacBook-Pro lab5 % ./lab5              

Index when a[i] = 4: 

2 3 4 10 16 17 18 19 26 29 34 

All values of array a: 

5 7 4 4 4 7 7 6 6 5 
4 6 5 7 6 3 4 4 4 4 
7 3 7 3 5 6 4 3 6 4 
6 3 5 5 4 6 7 5 7 6 
6 6 5 6 5 5 5 5 6 5 

ethan@Ethans-MacBook-Pro lab5 % 
*/