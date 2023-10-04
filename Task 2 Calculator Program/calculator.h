#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
private:
    int output;

public:
    int ADD(int a, int b);
    int SUBTRACT(int a, int b);
    int DIVIDE(int a, int b);
    int MULTIPLY(int a, int b);
    void DISPLAY_OUTPUT();
};

#endif // CALCULATOR_H
