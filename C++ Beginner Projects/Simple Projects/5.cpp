#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout<< "Write 4 numbers you want. "<< endl;
    cout<<"Num. 1:";
    cin>>a;
    cout<<"Num. 2:";
    cin>>b;
    cout<<"Num. 3:";
    cin>>c;
    cout<<"Num. 4:";
    cin>>d;

    double f = (a + b + c + d)/4;

    cout<< "The average of numbers: "
          <<a
          <<", "
          << b
          <<", "
          <<c
          <<", "
          <<d
          <<" is "
          <<f
          <<"\n";
    cout<<f;

    return 0;
}
