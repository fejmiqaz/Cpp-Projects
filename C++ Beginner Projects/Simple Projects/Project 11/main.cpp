#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f = 3.14159265;
    cout << setprecision (5) << f << endl;
    cout << setprecision (9) << f << endl;
    cout <<fixed;
    cout << setprecision (5) << f << endl;
    cout << setprecision (9) << f << endl;

    double e =2.71828182845;
    cout.precision(5);
    cout << e << endl;
    cout.precision(9);
    cout << e << endl;
    return 0;
}
