/*
       Name: Ethan Malabago
 Assignment: lab9
   Due Date: 11/24/2025
Description: tests vector initialization, default
             struct values, and assertion behavior
             using int, double, and Node vectors.
       File: lab9.cpp
*/

#include <vector>
#include <cassert>

using namespace std;

struct Node
{
    Node()
    {
        int_value = 0;
        double_value = 0.0;
    }

    int int_value;
    double double_value;
};

int main()
{
    vector <double> double_vec;
    vector <int> int_vector(5, 999);
    vector <Node> node_vec(100);

    assert(double_vec.size() == 0);
    assert(int_vector.size() == 5);
    assert(int_vector[0] == 999);
    assert(node_vec.size() == 100);
    assert(node_vec[9].int_value == 0);
    //assert(node_vec[9].int_value == 3);
    assert(node_vec[9].double_value == 0.0);

    return 0;
}

/*
Sample Output of intentional error (as stated in lab):

ethan@Ethans-MacBook-Pro lab9 % ./lab9
Assertion failed: (node_vec[9].int_value == 3), function main, file lab9.cpp, line 29.
zsh: abort      ./lab9
ethan@Ethans-MacBook-Pro lab9 %
*/
