#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int root,a,b,c,x1,x2;
    int D;

    cout<<"enter the values of a,b and c of your quadratic equation"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    D = ((b*b)-(4*a*c));
    x1 = (-b+(sqrt (D)))/(2*a);
    x2 = (-b-(sqrt (D)))/(2*a);

    if (D<0)
    {
        cout<<"roots are imaginary"<<endl;
        
    }
    else if (D == 0)
    {
        cout<<"The roots are equal"<<endl;
        cout<<"The roots of the quadratic number are "<<x1<<" and "<<x2<<endl;
    }
    else
    {
        cout<<"the roots are Real and distinct"<<endl;
        cout<<"The roots of the quadratic number are "<<x1<<" and "<<x2<<endl;
        
    }
    
    return 0;
    
    
}