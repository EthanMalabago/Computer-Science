/*
       Name: Ethan Malabago
 Assignment: hw13
   Due Date: 11/24/2025
Description: fibonacci numbers using recursive and regular function
       File: hw13.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int SIZE = 10;

int recursive_fib(int n);
int fib(int n);

int main()
{
    cout << endl << "n    fib(n)  recursive_fib(n)" << endl;
    cout << fixed << endl;

    for (int n = 0; n < SIZE; n++)
    {
        cout << n;
        cout << setw(8) << fib(n);
        cout << setw(13) << recursive_fib(n);
        cout << endl;
    }

    cout << endl;

    return 0;
}

int recursive_fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return recursive_fib(n - 1) + recursive_fib(n - 2);
}

int fib(int n)
{
    double s5 = sqrt(5);
    return round( (pow((1 + s5) / 2.0, n) - pow((1 - s5) / 2.0, n) ) / s5 );
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro hw13 % ./hw13

n    fib(n)  recursive_fib(n)

0       0            0
1       1            1
2       1            1
3       2            2
4       3            3
5       5            5
6       8            8
7      13           13
8      21           21
9      34           34

ethan@Ethans-MacBook-Pro hw13 % 
*/