/*
    Course: CISC 1610
      Name: Ethan Malabago
      Date: 09/15/25
      File: lab03.cpp
Assignment: roots of the quadratic equation
            ax^2 + bx + c = 0
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, disc, x_1, x_2;

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

    disc = b * b - 4 * a * c;
    x_1 = ( -b + sqrt( disc ) ) / 2 * a;
    x_2 = ( -b - sqrt( disc ) ) / 2 * a;

    cout << endl;
    cout << "x_1 = " << setw(8) << x_1 << endl;
    cout << "x_2 = " << setw(8) << x_2 << endl;
    cout << endl;

    return 0;
}

/*
    Sample output:

    ethan@Ethans-MacBook-Pro lab03 % ./lab03               

    Enter a: 1
    Enter b: -6
    Enter c: -7

      a =    1.000
      b =   -6.000
      c =   -7.000

    x_1 =    7.000
    x_2 =   -1.000

    ethan@Ethans-MacBook-Pro lab03 % 
*/