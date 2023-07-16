#include <iostream>

using namespace std;

int main()
{
    const double CENTIMETER_PER_INCH = 2.54;
    int incha;
    double centimeter;

    cout << "Write the length in centimeters: ";
    cin >> centimeter;
    cout << endl;
    incha = CENTIMETER_PER_INCH * centimeter;
    cout << incha
    << " centimeters is equal to " << incha
    << " inches" <<endl;

    return 0;
}
