/*
       Name: Ethan Malabago
 Assignment: lab4
   Due Date: 10/20/2025
Description: output # of random integers generated to obtain 7
             random integers in range [5, 10]
       File: lab4.cpp
*/

#include <iostream>

using namespace std;

const int TARGET = 7;
const int ROUND = 1;
unsigned int seed = 3u;

double random(unsigned int &seed);
int random_int(int min, int max);

int main()
{
    int count = 0;
    int six_count = 0;
    int currentNum = 0;

    while (six_count < TARGET)
    {
        currentNum = random_int(5, 10);
        if (currentNum == 6)
            six_count++;

        count++;
    }

    cout << endl;
    cout << "# of iterations to get 7 random ints with value 6 = " << count << endl;
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

int random_int(int min, int max)
{
    return (min + (max - min + ROUND) * random(seed));
}

/*
Sample output:

ethan@Ethans-MacBook-Pro lab4 % ./lab4                  

# of iterations to get 7 random ints with value 6 = 45

ethan@Ethans-MacBook-Pro lab4 % 
*/