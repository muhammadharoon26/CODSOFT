#include"calculator.h"
#include<iostream>
#include<string.h>
using namespace std;

int Calculator::ADD(int a,int b)
{
    output=a+b;
}

int Calculator::SUBTRACT(int a,int b)
{
    output=a-b;
}

int Calculator::DIVIDE(int a,int b)
{
    output=a/b;
}

int Calculator::MULTIPLY(int a,int b)
{
    output=a*b;
}

void Calculator::DISPLAY_OUTPUT()
{
    cout<<"\nOutput=\t"<<output<<endl;
}