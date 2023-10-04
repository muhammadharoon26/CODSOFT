#include<iostream>
#include"calculator.h"
// #include"calculator.cpp"
using namespace std;

int main()
{    
    Calculator perform;
    int x,y,c,ch;
    cout<<"Enter any two values:\n";
    cin>>x>>y;
    cout<<"\nWhich operation do you want to perform ?\n\n";
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nPress 0 to exit\n\n";
    cin>>c;
    switch(c)
    {
        case 1:
            perform.ADD(x,y);
            break;
        case 2:
            perform.SUBTRACT(x,y);
            break;
        case 3:
            perform.MULTIPLY(x,y);
            break;
        case 4:
            perform.DIVIDE(x,y);
            break;
        case 0:
            break;
        default:
            cout<<"Invalid Input !";
    }
    perform.DISPLAY_OUTPUT();
}