/*
       Name: Ethan Malabago
 Assignment: quiz3
   Due Date: 11/20/2025
Description: creates and prints a symmetric 2d array of size
             [8x8] with integers in range [10, 20]
       File: quiz3.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int ROW_SIZE = 8;
const int COL_SIZE = 8;
const int MIN = 10;
const int MAX = 20;

unsigned int seed = 7;

double random(unsigned int &seed);
int random_int(int min, int max);
void fill_array(int a[][COL_SIZE]);
void print_array(const int a[][COL_SIZE]);

int main()
{
    int a[ROW_SIZE][COL_SIZE];

    fill_array(a);

    cout << endl;
    cout << " Generated symmetric array" << endl;

    print_array(a);

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
    return int (min + (max - min + 1) * random(seed));
}

void fill_array(int a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; row++)
        for (int col = 0; col < COL_SIZE; col++)
        {
            int value = random_int(MIN, MAX);

            a[row][col] = value;

            if (row != col)
                a[col][row] = value;
        }
}

void print_array(const int a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; row++)
    {
        for (int col = 0; col < COL_SIZE; col++)
            cout << setw(3) << a[row][col];
        cout << endl;
    }
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro Quiz 3 % ./quiz3               

 Generated symmetric array
 16 18 12 15 15 16 17 11
 18 16 14 17 14 18 14 20
 12 14 12 13 13 14 11 16
 15 17 13 10 18 17 12 16
 15 14 13 18 19 15 15 12
 16 18 14 17 15 14 10 10
 17 14 11 12 15 10 10 11
 11 20 16 16 12 10 11 15

ethan@Ethans-MacBook-Pro Quiz 3 % 
*/