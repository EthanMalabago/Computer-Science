/*
    Course: CISC 1610
      Name: Ethan Malabago
      Date: 09/22/25
      File: lab1.cpp
Assignment: roots of the quadratic equation with roots check
            ax^2 + bx + c = 0
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
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
    cout << "  a = " << setw(8) << a << endl;
    cout << "  b = " << setw(8) << b << endl;
    cout << "  c = " << setw(8) << c << endl;

    if (a == 0)
    {
        cout << endl << "This is not a quadratic equation." << endl;

        return 0;
    }

    else 
    {
        disc = b * b - 4 * a * c;
        double x_1 = ( -b + sqrt( disc ) ) / (2 * a);
        double x_2 = ( -b - sqrt( disc ) ) / (2 * a);

        if (disc < 0.0)
            cout << endl << "The equation has no real roots." << endl;

        if (disc == 0.0)
        {
            cout << endl << "The equation has one real root: " << endl;
            cout << "x_1 = " << setw(8) << x_1 << endl;
            cout << "x_2 = " << setw(8) << x_2 << endl;
        }

        else
        {
            cout << endl << "The equation has two real roots: " << endl;
            cout << "x_1 = " << setw(8) << x_1 << endl;
            cout << "x_2 = " << setw(8) << x_2 << endl;
        }
    }

    cout << endl;
    
    return 0;
}

/*
    Sample code (two real roots):

    ethan@Ethans-MacBook-Pro lab1 % ./lab1

    Enter a: 1
    Enter b: 3
    Enter c: 2

      a =    1.000
      b =    3.000
      c =    2.000

    The equation has two real roots: 
    x_1 =   -1.000
    x_2 =   -2.000

    ethan@Ethans-MacBook-Pro lab1 % 
*/