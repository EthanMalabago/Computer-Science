/*
    Course: CISC 1600
      Name: Ethan Malabago
      Date: 09/25/25
      File: hw1.cpp
Assignment: area of a triangle, output message in case of invalid triangle sides
            sqrt(s * (s - a) * (s - b) * (s - c))
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, area;

    cout << endl;
    cout << "Area of Triangle Calculator using Heron's Formula" << endl;
    cout << endl << "Enter a: "; 
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
    {
        double s = (a + b + c) / 2;

        cout << endl << fixed << setprecision(3);
        cout << "   a = " << setw(8) << a << endl;
        cout << "   b = " << setw(8) << b << endl;
        cout << "   c = " << setw(8) << c << endl;

        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << endl << "area = " << setw(8) << area << endl;
        cout << endl;

        return 0;
    }
    
    else
    {
        cout << endl << "Values ";

        cout << endl << fixed << setprecision(3) << endl;
        cout << "a = " << setw(8) << a << endl;
        cout << "b = " << setw(8) << b << endl;
        cout << "c = " << setw(8) << c << endl;
        
        cout << endl << "do not form a triangle." << endl;
        cout << endl;
    }

    return 0;
}

/*
    Sample output (failure):

    ethan@Ethans-MacBook-Pro hw01 % ./hw01              

    Area of Triangle Calculator using Heron's Formula
    
    Enter a: 1
    Enter b: 2
    Enter c: 3

    Values 

    a =    1.000
    b =    2.000
    c =    3.000

    do not form a triangle.

    ethan@Ethans-MacBook-Pro hw01 %
*/