    #include<iostream>
    using namespace std;

    int main()
    {
        int age;
        cout<<"Enter your age:";
        cin>>age;
        switch (age)
        {
        case 18:
                cout<<"Your are adult"<<endl;
            break;
        case 12:
                cout<<"Your are child"<<endl;
            break;
        case 50:
                cout<<"Your are to old "<<endl;
            break;
        default:
        cout<<"No special case";
        }
        return 0;
    }