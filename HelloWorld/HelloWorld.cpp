// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    double tempf = 48;
    double tempc;
    tempc = (tempf - 32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
    return 0;
}
