/*
       Name: Ethan Malabago
 Assignment: hw4
   Due Date: 10/06/2025
Description: outputs sum 1 + 1/2 + 1/3 + ... + 1/u; 1 <= u <= 5 from keyboard
       File: hw4.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, area;
    bool valid = false;

    while (valid == false)
    {
        cout << endl;
        cout << "Area of Triangle Calculator using Heron's Formula" << endl;
        cout << endl << "Enter a: "; 
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;

        if (a > 0.0 && b > 0.0 && c > 0.0 && a + b > c && b + c > a && a + c > b)
        {
            double s = (a + b + c) / 2.0;

            cout << endl << fixed << setprecision(3);
            cout << "   a = " << setw(8) << a << endl;
            cout << "   b = " << setw(8) << b << endl;
            cout << "   c = " << setw(8) << c << endl;

            area = sqrt(s * (s - a) * (s - b) * (s - c));
            cout << endl << "area = " << setw(8) << area << endl;
            cout << endl;

            return 0;

            valid = true;
        }
        
        else
        {
            cout << endl << "Values ";

            cout << endl << fixed << setprecision(3) << endl;
            cout << "a = " << setw(8) << a << endl;
            cout << "b = " << setw(8) << b << endl;
            cout << "c = " << setw(8) << c << endl;
            
            cout << endl << "do not form a triangle. Please try again." << endl;
            cout << endl;
        }
    }

    return 0;
}