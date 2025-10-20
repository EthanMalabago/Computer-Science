/*
       Name: Ethan Malabago
 Assignment: quiz1
   Due Date: 10/16/2025
Description: sequence of squares adding to 255/32 such that consecutive
             squares are half the area of the previous
       File: quiz1.cpp
*/

#include <iostream>

using namespace std;

const double LIMIT = 255.0 / 32.0;

int main()
{
    int count = 0;
    double area = 4;
    double total = 0;

    do
    {
        total += area;
        area = area / 2;
        count++;
    }   while (total < LIMIT);
    
    cout << endl;
    cout << "# of squares: " << count << endl;
    cout << endl;

    return 0;
}

/*
Sample code:

ethan@Ethans-MacBook-Pro Quiz 1 % ./quiz1                   

# of squares: 8

ethan@Ethans-MacBook-Pro Quiz 1 % 
*/