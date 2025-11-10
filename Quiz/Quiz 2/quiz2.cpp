/*
       Name: Ethan Malabago
 Assignment: quiz2
   Due Date: 11/06/2025
Description: babylon_sqrt comparison with built_in_sqrt with
             checker for a >= 0
       File: quiz2.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int ITERATIONS = 20;

double babylonian_sqrt(double a);

int main()
{
    double a = -1;

    cout << endl;

    do
    {
        cout << "Enter a number greater than or equal to 0: ";
        cin >> a;
    }   while (a < 0);

    cout << endl << fixed << setprecision(10);
    cout << " babylon_sqrt( " << setw(10) << a << " ) = " << babylonian_sqrt(a);
    cout << endl << "built_in_sqrt( " << setw(10) << a << " ) = " << sqrt(a) << endl;
    cout << endl;

    return 0;
}

double babylonian_sqrt(double a)
{
    double x = a / 4;
    double x_new;

    for (int i = 0; i < ITERATIONS; i++)
    {
        x_new = ( x + a / x ) / 2;
        x = x_new;
    }

    return x;
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro Quiz 2 % ./quiz2                   

Enter a number greater than or equal to 0: 5

 babylon_sqrt( 5.0000000000 ) = 2.2360679775
built_in_sqrt( 5.0000000000 ) = 2.2360679775

ethan@Ethans-MacBook-Pro Quiz 2 % 
*/
