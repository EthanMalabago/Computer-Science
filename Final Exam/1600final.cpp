/*
       Name: Ethan Malabago
 Assignment: 1600final
   Due Date: 12/18/2025
Description: populates char array with random letters twice,
             first time is completely random and another time
             ensuring a palindrome is created, works with any
             positive SIZE
       File: 1600final.cpp
*/

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

const int SIZE = 6;
unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed);
char random_char(char start, char finish);
void fill_random(char a[]);
void determine_palindrome(const char a[]);
void fill_palindrome(char a[]);

int main()
{
    char a[SIZE];

    cout << endl;
    fill_random( a );
    determine_palindrome( a );
    fill_palindrome( a );
    determine_palindrome( a );
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
    return char ( int (start + (finish - start + 1) * random(seed)) );
}

void fill_random(char a[])
{
    for (int i = 0; i < SIZE; i++)
        a[i] = random_char('a', 'z');
}

void determine_palindrome(const char a[])
{
    bool is_palindrome = true;

    cout << "array: ";

    for (int i = 0; i < SIZE; i++)
        cout << fixed << setw(2) << a[i];

    for (int i = 0; i < SIZE / 2; i++)
        if (a[i] != a[SIZE - 1 - i])
            is_palindrome = false;

    if (is_palindrome)
        cout << "   is a palindrome";
    else
        cout << "   is not a palindrome";

    cout << endl;
}

void fill_palindrome(char a[])
{
    for (int i = 0; i < SIZE / 2; i++)
    {
        a[i] = random_char('a', 'z');
        a[SIZE - 1 - i] = a[i];
    }

    if (SIZE % 2 == 1)
        a[SIZE / 2] = random_char('a', 'z');
}

/*
Sample Output (odd size):

ethan@Ethans-MacBook-Pro FINAL EXAM % ./final

array:  w z b j s r t   is not a palindrome
array:  k q t e t q k   is a palindrome

ethan@Ethans-MacBook-Pro FINAL EXAM %
*/

/*
Sample Output (even size):

ethan@Ethans-MacBook-Pro FINAL EXAM % ./final

array:  u w u j b g   is not a palindrome
array:  u x o o x u   is a palindrome

ethan@Ethans-MacBook-Pro FINAL EXAM %
*/
