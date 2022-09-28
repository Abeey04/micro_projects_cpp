#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter two numbers of your choice :"<<endl;
    cin>>x;
    cin>>y;
    if (x > y)
    {
        cout<<"The greater number is "<<x;
        // break;
    }
    else if ( y > x )
    {
        cout<<"The greater number is "<<y;
    }
    if (x == y)
    {
        cout<<"The numbers entered are Equal"<<endl;
    }
    
    
    return 0;
}