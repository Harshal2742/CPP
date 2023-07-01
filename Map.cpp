#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks;
    marks["Shreysh"] = 96;
    marks["Krontan"] = 87;
    marks["Harry"] = 75;
    marks["Keran"] = 28;

    marks.insert({{"Adity", 45}, {"Akash", 78}});
    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second<<endl;
    }

    cout << "The size of map is ";
    cout << marks.size() << endl;

    cout << "The no. of empty elements in map:"<<marks.empty()<<endl;
    itr = marks.find("Keran");
    marks.erase(itr);

    cout << "The map after using erase"<<endl;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second<<endl;
    }

    cout << "The size map of after using erase is ";
    cout << marks.size() << endl;

    return 0;
}