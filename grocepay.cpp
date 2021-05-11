#include <iostream>
using namespace std;

int main()
{
    double hours ,rate, pay;

    cout<<"How many hours did you work? " <<endl;
    cin>>hours;

    cout<< "How much do you get paid per hour? "<<endl;
    cin>> rate ;

    pay = hours * rate;
    cout<<"You have earned $"<< pay <<endl;
    return 0;

    
}