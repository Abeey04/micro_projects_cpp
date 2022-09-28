#include <iostream>
using namespace std;

int main(){
    int sum,n;

    cout<<"Enter the number till where you'd like the sum to be"<<endl;
    cin>>n;
    sum = (n*(n+1))/2;
    cout<<"The sum of natural numbers till "<<n <<" is "<<sum<<endl;

    return 0;
}