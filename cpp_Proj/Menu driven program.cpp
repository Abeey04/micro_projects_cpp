#include <iostream>
using namespace std;

int main(){
    int menu,x1,x2;
    string option;
    int solution;
    cout<<"Menu :"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Sub"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Enter 1 to Add, 2 for Sub, 3 to multiply and 4 to Divide :"<<endl;
    cin>>menu;
    if (menu == 1)
    {
        option = "Add";
    }
    else if (menu == 2)
    {
        option = "Sub";
    }
    else if (menu == 3)
    {
        option = "Multiply";
    }
    else
    {
        option = "Divide";
    }
    cout<<"Now enter the two numbers that you'd like to "<<option<<endl;
    cin>>x1;
    cin>>x2;
    if (option == "Add")
    {
        solution = (x1+x2);
    }
    if (option == "Sub")
    {
        solution = (x1-x2);
    }
    if (option == "Multiply")
    {
        solution = (x1*x2);
    }
    if (option == "Divide")
    {
        solution = (x1/x2);
    }

    cout<<"Your solution is : "<<solution;
    

    
    
     
    return 0;
}