#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 10;

void fill_array(int a[][SIZE]);
void print_array(const int a[][SIZE]);

int main()
{
    int a[SIZE][SIZE];

    fill_array(a);
    print_array(a);

    return 0;
}

void fill_array(int a[][SIZE])
{
    for (int row = 0; row < SIZE; row++)
        for (int col = 0; col < SIZE; col++)
            if (row == col)
                a[row][col] = 0;
            else
                if (row > col)
                    a[row][col] = -1;
                else
                    a[row][col] = 1;
}

void print_array(const int a[][SIZE])
{
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
            cout << setw(3) << a[row][col];
        cout << endl;
    }
}