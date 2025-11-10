/*
       Name: Ethan Malabago
 Assignment: lab6
   Due Date: 11/03/2025
Description: generates array with 10 distinct random ints in range [10, 30]
       File: lab6.cpp
*/

#include <iostream>

using namespace std;

const int LOW = 10;
const int HIGH = 30;
const int SIZE = 10;

unsigned int seed = 7;

double random(unsigned int &seed);
int random_int(int low, int high);
void fill_array(int a[]);

int main()
{
    int a[SIZE];

    fill_array(a);
    
    for (int i = 0; i < SIZE; i++)
        cout << a[i] << ' ';

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

int random_int(int low, int high)
{
    return int (low + (high - low + 1) * random(seed));
}

void fill_array(int a[])
{
    int num, checkI;

    for (int i = 0; i < SIZE; i++)
    {
        do
        {
            num = random_int(LOW, HIGH);

            checkI = 0;
            while (checkI < i && a[checkI] != num)
                checkI++;
        }   while (checkI < i);
        
        a[i] = num;
    }
}

/*
Sample output:

ethan@Ethans-MacBook-Pro lab6 % ./lab6              
22 27 17 14 30 24 26 19 11 15 
ethan@Ethans-MacBook-Pro lab6 % 
*/