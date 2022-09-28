#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if (age >= 12 && age <= 20)
    {
        cout<<"you're a Teen, How's Puberty?";
    }
    else if (age >= 20 && age <= 50)
    {
        cout<<"OHH! you're YOUNG young...slayyyyy"<<endl;
    }
    if( age > 50)
    {
        cout<<"OK BOOMER !"<<endl;
    }
    else if( age < 12)
    {
        cout<<"you're just a Babyyy"<<endl;
    }
    


    return 0;
}