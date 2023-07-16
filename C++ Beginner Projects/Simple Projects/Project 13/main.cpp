#include <iostream>
using namespace std;

const int den2000 = 2000;
const int den1000 = 1000;
const int den500 = 500;
const int den200 = 200;
const int den100 = 100;
const int den50 = 50;
const int den10 = 10;
const int den5 = 5;
const int den2 = 2;
const int den1 = 1;

int main()
{
   int shuma;

    cout << "Write the amount of denars: ";
    cin >> shuma;
    cout << "\n The amount of 2000 denars is ";
    cout << shuma / den2000;
    shuma = shuma % den2000;
     cout << "\n The amount of 1000 denars is ";
    cout << shuma / den1000;
    shuma = shuma % den1000;
     cout << "\n The amount of 500 denars is ";
    cout << shuma / den500;
    shuma = shuma % den500;
      cout << "\n The amount of 200 denars is ";
    cout << shuma / den200;
    shuma = shuma % den200;
      cout << "\n The amount of 100 denars is ";
    cout << shuma / den100;
    shuma = shuma % den100;
      cout << "\n The amount of 50 denars is ";
    cout << shuma / den50;
    shuma = shuma % den50;
      cout << "\n The amount of 10 denars is ";
    cout << shuma / den10;
    shuma = shuma % den10;
      cout << "\n The amount of 5 denars is ";
    cout << shuma / den5;
    shuma = shuma % den5;
      cout << "\n The amount of 2 denars is ";
    cout << shuma / den2;
    shuma = shuma % den2;
      cout << "\n The amount of 1 denars is ";
    cout << shuma / den1;
    shuma = shuma % den1;

    return 0;
}
