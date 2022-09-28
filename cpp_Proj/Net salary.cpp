// Net salary = Basic salary + (basic salary * percentage of Allowances) + (basic salary * percentage of Deductions )
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int net_salary;
    int basic_salary;
    float P_Allowances;
    float P_Deductions;
    cout<<"Hello today we'll be calculating the Net salary"<<endl;
    cout<<"Please enter your Basic salary :"<<endl;
    cin>>basic_salary;
    cout<<"Now enter your Percentage of allowances"<<endl;
    cin>>P_Allowances;
    cout<<"Very well, now enter your Percentage of Deductions"<<endl;
    cin>>P_Deductions;
    net_salary = basic_salary + (basic_salary*P_Allowances/100) - (basic_salary*P_Deductions/100);
    cout<<"ok, then your net salary would be "<<net_salary;

    return 0;

}