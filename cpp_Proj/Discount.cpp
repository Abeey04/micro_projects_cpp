#include <iostream>
using namespace std;

int main(){
    int amount,dis_amount;
    float n;
    cout<<"please enter your amount"<<endl;
    cin>>amount;
    // dis_amount = ((amount)-(amount*n));
    if ( amount >= 5000 ) 
    {
        n = 0.2;
        dis_amount = ( (amount) - (amount*n) );
        cout<<dis_amount; 
    }
    else if (2000<=amount && amount<5000)
    {
        n = 0.1;
        dis_amount = ( (amount) - (amount*n) );
        cout<<dis_amount;
    }
    if (amount < 2000 )
    {
        n = 0.05;
        dis_amount = ((amount)-(amount*n));
        cout<<dis_amount;
    }

    
    
    return 0;
}