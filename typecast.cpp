#include<iostream>
using namespace std;

int main()
{

    int books ,months;
    double permonth;

    cout<<"How many book do you plan to read? ";
    cin>>books;
    cout<<"how many months will it take you to read them? ";
    cin>>months;
    permonth =static_cast<double>(books)/months;
    cout<<"That is "<<permonth<<" books per month.\n";
    return 0;
    }