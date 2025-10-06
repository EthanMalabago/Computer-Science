/*
       Name: Ethan Malabago
 Assignment: lab2
   Due Date: 09/29/2025
Description: find a number divisible by 2 and 3, continues until condition is met and outputs number of tries
       File: lab2.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int count, n;
    
    cout << endl;

    count = 0;
    
    do
    {
        cout << "Enter integer: ";
        cin >> n;
        count++;
    }   while(n % 6 != 0);

    cout << endl;
    cout << "You entered " << count << " integers" << endl;
    cout << endl;

    return 0;
}

/*
Sample output:

ethan@Ethans-MacBook-Pro lab2 % ./lab2                  

Enter integer: 1
Enter integer: 2
Enter integer: 3
Enter integer: 4
Enter integer: 5
Enter integer: 6

You entered 6 integers

ethan@Ethans-MacBook-Pro lab2 %
*/