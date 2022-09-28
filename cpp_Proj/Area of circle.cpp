#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int radius;
    float area;
    cout<<"Hello there we would be calcuating Area of a circle of a given radius"<<endl;
    cout<<"please enter the radius of the circle for which you'd like to calculate the area of :"<<endl;
    cin>>radius;
    area = ((3.14)*(pow(radius,2)));
    cout<<area;

    return 0;
}