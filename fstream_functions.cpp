#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;

    ofstream set;
    set.open("fstream_functions.txt");
    cout << "Enter your information below." << endl;
    cout << "Name : ";
    cin >> str;
    set << "Name :" << str << endl;
    cout << "Address : ";
    cin >> str;
    set << "Address :" << str << endl;
    cout << "Tal : ";
    cin >> str;
    set << "Tal :" << str << endl;
    cout << "Dist : ";
    cin >> str;
    set << "Dist :" << str << endl;
    set.close();

    ifstream get;
    get.open("fstream_functions.txt");
    while (get.eof() == 0)
    {
        getline(get, str);
        cout << str << endl;
    }
    get.close();
    return 0;
}