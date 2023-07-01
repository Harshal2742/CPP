#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t currentTime;
    long long n1=time(&currentTime);//it returns time form particular date
    cout << n1 << endl;
    cout << "current time and today's date : " << asctime(localtime(&currentTime));
    return 0;
}