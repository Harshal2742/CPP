#include<iostream>
using namespace std;



int main()
        {
          /*enum dir{east, weast, south, north};
          dir d1,d2,d3,d4;
          d1 = east;
          d2 = weast;
          d3 = south;
          d4 = north;
          cout << d1<<endl;
          cout << d2<<endl;
          cout << d3<<endl;
          cout << d4<<endl; */

          /*enum direction{east=10, weast, south, north};
          direction d1,d2,d3,d4;
          d1 = east;
          d2 = weast;
          d3 = south;
          d4 = north;
          cout << d1<<endl;
          cout << d2<<endl;
          cout << d3<<endl;
          cout << d4<<endl;*/

          /*enum direction{east=10, weast=20, south=30, north=40};
          direction d1,d2,d3,d4;
          d1 = east;
          d2 = weast;
          d3 = south;
          d4 = north;
          cout << d1<<endl;
          cout << d2<<endl;
          cout << d3<<endl;
          cout << d4<<endl;*/

          enum direction{east=10, weast=20, south=30, north=40};
          direction d1,d2;
          d1 = east;
          d2 = weast;;
          cout << d1<<endl;
          cout << d2<<endl;
          cout << south <<endl;
          cout << north <<endl;
          return 0;
        }