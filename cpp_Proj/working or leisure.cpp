#include <iostream>
using namespace std;

int main(){
    int hour;
    cout<<"type in your time :"<<endl;
    cout<<"NOTE - hours would be considered in a 24 hour format"<<endl;
    cin>>hour;
    if (hour >= 9 && hour <= 18 )
    {
        cout<<"working hour"<<endl;
    }
    else
    {
        cout<<"Leisure hour"<<endl;
    }
    
    return 0;
}