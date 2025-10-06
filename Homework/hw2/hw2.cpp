/*
       Name: Ethan Malabago
 Assignment: hw2
   Due Date: 09/29/2025
Description: roots of the quadratic equation with roots check and vieta's method
       File: hw2.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, disc;

    cout << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << endl;
    cout << fixed << setprecision(3);
    cout << " a = " << setw(8) << a << endl;
    cout << " b = " << setw(8) << b << endl;
    cout << " c = " << setw(8) << c << endl;

    if (a == 0.0)
    {
        cout << endl << "This is not a quadratic equation." << endl;
        cout << endl;

        return 0;
    }

    disc = b * b - 4.0 * a * c;

    if (disc < 0)
    {
        cout << endl << "The equation has no real roots." << endl;
        cout << endl;

        return 0;
    }

    double x1, x2;

    if (disc == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = c / (a * x1);

        cout << endl << "The equation has one real root: " << endl;
        cout << "x1 = " << setw(8) << x1 << endl;
        cout << "x2 = " << setw(8) << x2 << endl;
    }
    else
    {
        x1 = (-b + sqrt(disc)) / (2.0 * a);
        x2 = (-b - sqrt(disc)) / (2.0 * a);

        cout << endl << "The equation has two real roots: " << endl;
        cout << "x1 = " << setw(8) << x1 << endl;
        cout << "x2 = " << setw(8) << x2 << endl;
    }
    
    cout << endl;
    
    return 0;
}

/*
Sample code:

ethan@Ethans-MacBook-Pro hw2 % ./hw2                 

Enter a: 0.5
Enter b: 1.5
Enter c: -1

 a =    0.500
 b =    1.500
 c =   -1.000

The equation has two real roots: 
x1 =    0.562
x2 =   -3.562

ethan@Ethans-MacBook-Pro hw2 %
*/