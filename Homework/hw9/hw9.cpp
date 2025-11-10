/*
       Name: Ethan Malabago
 Assignment: hw9
   Due Date: 11/10/2025
Description: prints integer array of size 20 and finds avg of
             all elements
       File: hw9.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 20;
const int MIN = 1;
const int MAX = 5;

unsigned int seed = 8;

double random(unsigned int &seed);
int random_int(int low, int high);

int main()
{
    int a[SIZE];
    double avg, total = 0.0;

    cout << endl;
    
    for (int i = 0; i < SIZE; i++)
        a[i] = random_int(MIN, MAX);

    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << a[i];

        if ((i + 1) % 5 == 0)
            cout << endl;

        total += a[i];
    }

    avg = total / SIZE;

    cout << endl << fixed << setprecision(6);
    cout << "avg = " << setw(6) << avg << endl;
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

/*
Sample Output:

ethan@Ethans-MacBook-Pro hw9 % ./hw9             

  1  5  5  1  2
  1  1  4  3  3
  4  1  4  3  3
  2  2  3  1  2

avg = 2.550000

ethan@Ethans-MacBook-Pro hw9 % 
*/