/*
       Name: Ethan Malabago
 Assignment: hw3
   Due Date: 10/2/2025
Description: outputs sum 1 + 1/2 + 1/3 + ... + 1/u; 1 <= u <= 5 from keyboard
       File: hw3.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int u;

    cout << endl;

    do
    {
        cout << "Enter an integer u (1 <= u <= 5): ";
        cin >> u;
    }   while (u < 1 || u > 5);
    
    double sum = 0.0;
    for (int i = 1; i <= u; i++)
    {
        sum += 1.0 / i;
    }

    cout << endl;
    cout << "  u = " << u << endl;
    cout << fixed << setprecision(6);
    cout << "sum = " << setw(8) << sum << endl;
    cout << endl;
    
    return 0;
}

/*
Sample output:

ethan@Ethans-MacBook-Pro hw3 % ./hw3

Enter an integer u (1 <= u <= 5): 0
Enter an integer u (1 <= u <= 5): -5
Enter an integer u (1 <= u <= 5): -3
Enter an integer u (1 <= u <= 5): 7
Enter an integer u (1 <= u <= 5): 5

  u = 5
sum = 2.283333

ethan@Ethans-MacBook-Pro hw3 %

*/