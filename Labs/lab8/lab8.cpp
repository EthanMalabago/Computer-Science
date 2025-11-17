/*
       Name: Ethan Malabago
 Assignment: lab8
   Due Date: 11/17/2025
Description: recursive n choose k program: read n, k
             from keyboard and compute binomial coefficient
       File: lab8.cpp
*/

#include <iostream>

using namespace std;

int n, k;

int n_choose_k(int n, int k);
void input_n(int &n);
void input_k(int &k);

int main()
{
    input_n(n);
    input_k(k);
    
    cout << endl << "binomial c = " << n_choose_k(n, k) << endl;
    cout << endl;

    return 0;
}

int n_choose_k(int n, int k)
{
    if (k == 0 || k == n)
        return 1;

    return n_choose_k(n - 1, k - 1) + n_choose_k(n - 1, k);
}

void input_n(int &n)
{
    do
    {
        cout << endl << "Enter n: ";
        cin >> n;
    }   while (n < 0);
}

void input_k(int &k)
{
    do
    {
        cout << "Enter k: ";
        cin >> k;
    }   while (k < 0 || k > n);
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro lab8 % ./lab8

Enter n: 100
Enter k: 2

binomial c = 4950

ethan@Ethans-MacBook-Pro lab8 % 
*/