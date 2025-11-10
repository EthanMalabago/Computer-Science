/*
       Name: Ethan Malabago
 Assignment: hw10
   Due Date: 11/10/2025
Description: creates char array of size 50 and prints all elements
             in a 5 x 10 matrix (5 rows 10 columns)
       File: hw10.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int ROW_SIZE = 5;
const int COL_SIZE = 10;

unsigned int seed = 7;

double random(unsigned int &seed);
char random_char(char start, char finish);
void fill_array(char a[][COL_SIZE]);
void print_array(char a[][COL_SIZE]);

int main()
{
    char a[ROW_SIZE][COL_SIZE];

    fill_array(a);
    print_array(a);

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

char random_char(char start, char finish)
{
    return char (int (start + (finish - start + 1) * random(seed)));
}

void fill_array(char a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; row++)
        for (int col = 0; col < COL_SIZE; col++)
            a[row][col] = random_char('A', 'Z');
}

void print_array(char a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; row++)
    {
        for (int col = 0; col < COL_SIZE; col++)
            cout << setw(4) << a[row][col];
        cout << endl;
    }
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro hw10 % ./hw10
   P   V   J   F   J   V   Z   S   U   P
   F   S   L   Z   R   B   F   J   G   I
   Z   C   V   E   M   S   I   B   U   G
   T   E   M   K   H   T   V   K   Z   P
   Q   U   L   S   M   K   L   P   R   K
ethan@Ethans-MacBook-Pro hw10 % 
*/