#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double width, height, area;

    cout << endl;
    cout << "Area of a Right Trangle Calculator" << endl;
    cout << endl;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl;

    cout << fixed << setprecision(4);
    cout << " width = " << setw(8) << width << endl;
    cout << "height = " << setw(8) << height << endl;

    area = width * height / 2;

    cout << "  area = " << setw(8) << area << endl;
    cout << endl;

    return 0;
}