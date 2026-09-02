#include <iostream>

int main(){

    //declare a const => a constant
    // it functions as a READONLY or setting up a variable that can't be changed therefore a constant
    const double PI = 3.14;
    //declare variables that are needed
    int R = 10;
    double circumference = 2 * R * PI;

    std::cout << circumference;

    return 0;
}