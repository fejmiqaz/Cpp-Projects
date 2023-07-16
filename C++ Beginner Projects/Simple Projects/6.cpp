#include <iostream>
using namespace std;
const int cent50 = 50;
const int cent20 = 20;
const int cent10 = 10;
const int cent5 = 5;
const int cent2 = 2;
const int cent1 = 1;

int main()
{
  int shuma;
  cout << "Write the amount of cents: ";
  cin >> shuma;
  cout << endl;
  cout << "The written amount of cents is: " << shuma;
  cout.width(60);
  cout.fill('-');
         cout<< endl;
  cout<< "\nThe number of 50 cents is "
        << shuma / cent50;
        shuma = shuma / cent50;
  cout<< "\nThe number of 20 cents is "
        << shuma / cent20;
        shuma = shuma / cent20;
  cout<< "\nThe number of 10 cents is "
        << shuma / cent10;
        shuma = shuma / cent10;
  cout<< "\nThe number of 2 cents is "
        << shuma / cent2;
        shuma = shuma / cent2;
  cout<< "\nThe number of 1 cents is "
        << shuma / cent1;
        shuma = shuma / cent1;
  cout<< endl;
    return 0;
}
