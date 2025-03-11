/*
Universidad Amerike
Author: José Sierra
Pratice#:10
Date: 11/03/25
Description: This code only prints the terms you want from the Fibonacci series
*/

#include <iostream>
#include <iomanip>

using namespace std;

int Selection;

int getint()
{
    int number = 1;

    return number;
}
float getfloat()
{
    float floatnumber = 3.14f;

    return floatnumber;
}
double getdouble()
{
    double doublenumber = 3.14161718;

    return doublenumber;
}
string getstring()
{
    string Word = "Hello";

    return Word;
}

int main ()
{
    cout<< "Which function would you like to know what is inside?\n";
    cout<< "1-Interger\n";
    cout<< "2-float\n";
    cout<< "3-double\n";
    cout<< "4-string\n";
    cin>> Selection;

    if (Selection == 1)
    {
        cout<< "This function is an interger and inside has: " << getint();
    }
    else if (Selection == 2)
    {
        cout<< "This function is a float and inside has: " << getfloat();
    }
    else if (Selection == 3)
    {
        cout<< "This function is a double and inside has: " << setprecision(15) << getdouble();
    }
    else if (Selection == 4)
    {
        cout<< "This function is a string and inside has: " << getstring();
    }
    
    
    return 0;

    
}
