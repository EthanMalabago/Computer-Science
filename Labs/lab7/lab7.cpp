/*
       Name: Ethan Malabago
 Assignment: lab7
   Due Date: 11/10/2025
Description: populate and print array of Record structs with
             random char, int [5, 10], double [5, 10)
       File: lab7.cpp
*/

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

const int SIZE = 10;
const int MIN = 5;
const int MAX = 10;

unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed);
char random_char(char start, char finish);
int random_int(int low, int high);

struct Record
{
    char ch;
    int n;
    double x;
};

void fill_array(Record a[]);
void print_array(const Record a[]);

int main()
{
    Record a[SIZE];

    cout << endl;
    cout << "i   ch   n      x" << endl;
    cout << fixed << setprecision(6);

    fill_array(a);
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

char random_char(char start, char finish)
{
    return char (int (start + (finish - start + 1) * random(seed)));
}

int random_int(int low, int high)
{
    return int (low + (high - low + 1) * random(seed));
}

void fill_array(Record a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        a[i].ch = random_char('a', 'z');
        a[i].n = random_int(MIN, MAX);
        a[i].x = MIN + (MAX - MIN) * random(seed);
    }
}

void print_array(const Record a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << i;
        cout << setw(4) << a[i].ch;
        cout << setw(5) << a[i].n;
        cout << setw(10) << a[i].x << endl;
    }
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro lab7 % ./lab7              

i   ch   n  x
0   c    8  8.563749
1   f    9  9.591763
2   z    9  9.941566
3   i    9  8.282885
4   f    6  7.812985
5   a    7  5.812660
6   n    9  7.930113
7   n    7  7.762317
8   m    8  8.319684
9   x   10  6.792570

ethan@Ethans-MacBook-Pro lab7 % 
*/