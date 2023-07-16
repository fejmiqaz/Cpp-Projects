#include <iostream>

using namespace std;

int main()
{
    const double CENTIMETER_PER_INCH = 2.54;
    int incha;
    double centimeter;

    cout << "Write the length in inches: ";
    cin >> incha;
    cout << endl;
    centimeter = CENTIMETER_PER_INCH * incha;
    cout << incha
    << " inches is equal to " << centimeter
    << "cm" << endl;

    return 0;
}
