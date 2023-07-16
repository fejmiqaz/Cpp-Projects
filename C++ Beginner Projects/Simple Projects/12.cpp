#include <iostream>

using namespace std;

int main()
{
    int time = 0 , hour = 0 , min = 0 , sec = 0;
    cout << "Write the amount of seconds: " << endl;
    cin>>time;

    hour=time/3600; //conversion of hours to seconds
    time=time%3600; //remaining seconds
    min=time/60; //conversion of minutes to seconds
    time=time%60; //remaining of minutes
    sec=time;

    cout << "The form is HH:MM:SS, " << hour << ":" << min << ":" << sec << endl;
    return 0;
}
