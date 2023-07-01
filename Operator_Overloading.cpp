#include <iostream>
#include <list>
using namespace std;

class YT
{
public:
    string name;
    int subscribers;
    YT(string name, int subscribers)
    {
        this->name = name;
        this->subscribers = subscribers;
    }

//here return type is bool because "==" operator return ture if channel name are same else return false
//but by this way change the actual parameter resived so we have to make it constant
    bool operator==(const YT& ch)
    {
        return this->name == ch.name;
    }
};

//(<<) operator overloading
//As we not returning ostream& i.e.(COUT) this operator overloading will run for only
//one YT object at a time i.e. we can not write like cout<<channel1<<channel2 this will
//throw error this is because for next object there is no cout present to achieve this
//we have to return cout of type ostream(which is taken by reference) from oprator
//overloading  this is similar like function calling chain using " this" pointer
//as cout is of type ostream
// void operator<<(ostream &COUT, YT yt1) //here we passes parameters byreference(original)
// {
//     //here << is insertion operator and we inserting channel details in COUT,so if we write
//     // cout << yt(i.e. YT object) this will print channel name & subscribers
//     COUT << "Channel name : " << yt1.name << "\nSubscribers : " << yt1.subscribers << endl;
// }

//as cout is taken by reference we have to return by reference
//we can now write like cout<< channel1 << channel2 << channel3...and so on
ostream &operator<<(ostream &COUT, YT yt1) //here we passes parameters byreference(original)
{
    //here << is insertion operator and we inserting channel details in COUT,so if we write
    // cout << yt(i.e. YT object) this will print channel name & subscribers
    COUT << "Channel name : " << yt1.name << endl;
    COUT << "Subscribers : " << yt1.subscribers << endl
         << endl;
    return COUT;
}

class myFavChannel
{
public:
    list<YT> channelList; //channelList is list of type YT

    // "+=" operator take only one parameter second parameter available automatically
    // by using this keyword
    void operator+=(YT &channel)
    {
        this->channelList.push_back(channel);
    }

//here remove function of list is able to check only integer by using "==" it is not able
//to check user defined data type so we have to over load "==" operator of user defined data type
//as remove() function is used to remove YT so we have fo overload it in YT
    void operator-=(YT &channel)
    {
        this->channelList.remove(channel);
    }

};

void operator<<(ostream &COUT, myFavChannel &myFav)
{
    for (YT ch : myFav.channelList)
    {
        COUT << ch;
    }
}

int main()
{
    YT channel1("COD", 56000);
    YT channel2("FORTNITE", 80000);
    YT channel3("BGMI", 160000);
    // cout << channel1; //If we run code without overloading << operator compiler throws error
    //cout << channel1 << channel2;// this will throw error if operator overloading is void
    // operator<<(cout, channel1);//as operator overloading is just like normal function we can
    //do also like this
    myFavChannel fav;
    fav += channel1; //as we want to add channel1 in favChannel (i.e. in channelList which is list of type YT)
                     //we have to overload "+=" operator and we created "+=" as member function of favChannel
    fav += channel2;
    fav += channel3;
    fav -= channel2;
    cout << fav;
    return 0;
}