#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout <<  setfill ('x')<< setw (10);
    cout <<  2020  << endl;

    cout << setfill ('v')<< setw (14);
    cout << 2021 << endl;
    cout << setfill ('*')<< setw (18);
    cout << 2022 << endl;
    cout << setfill ('^')<< setw(22);
    cout << 2023 << endl;
    return 0;
}
