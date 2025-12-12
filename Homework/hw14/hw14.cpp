/*
       Name: Ethan Malabago
 Assignment: hw14
   Due Date: 12/14/2025
Description: Collatz sequence using recursive function with no counter variable
       File: hw14.cpp
*/

#include <iostream>

using namespace std;

const int START = 0;

int collatz(int n);

int main()
{
    int n;

    cout << endl << "Enter a positive integer: ";
    cin >> n;
    cout << endl;

    int length = collatz(n);

    cout << endl << endl;
    cout << "Total numbers in the sequence: " << length << endl;
    cout << endl;

    return 0;
}

int collatz(int n)
{
    cout << n;

    if (n == 1)
        return 1;

    cout << "  ";

    if (n % 2 == 0)
        return 1 + collatz(n / 2);
    else
        return 1 + collatz(3 * n + 1);
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro hw14 % ./hw14

Enter a positive integer: 7

7  22  11  34  17  52  26  13  40  20  10  5  16  8  4  2  1

Total numbers in the sequence: 17

ethan@Ethans-MacBook-Pro hw14 %
*/
