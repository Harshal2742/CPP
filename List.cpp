#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l2)
{
    list<int>::iterator itr = l2.begin();
    for (itr; itr != l2.end(); itr++)
       {
           cout<< *itr << " ";
       }
       cout << endl;
}

int main()
{
    list<int> l1;
    int size ;
    int e;
    cout << "Enter the size of list " << endl;
    cin >> size;
 
     
    cout << "Enter the elements of list " << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> e;
        l1.push_back(e);
    }

    cout << "Displaying list" << endl;
    display(l1);

    cout << "Adding 50 at first of list : ";
    l1.push_front(50);
    display(l1);

    cout << "Deleting last element in list : ";
    l1.pop_back();
    display(l1);

    cout << "sorted list : ";
    l1.sort();
    display(l1);

    cout << "Reversed list : ";
    l1.reverse();
    display(l1);
    
    list<int> l2;
    l2.push_back(34);
    l2.push_back(45);
    l2.push_back(56);
    l2.push_back(67);

    cout << "The 2nd list is : ";
    int d = display(l2);

    cout << "merging the list2 with list1" << endl;
    l1.merge(l2);
    display(l1);

    return 0;
}