#include <iostream>

namespace first{
    int students = 10;
}

main(){
    // arithmetic operation = returns the result of any of the arithmetic operation. Such as + - / *
    int students = 20;
    int negative;
    int multi;
    int divi;
    int remainder;

    students+=2; // it is the same as students = students + 1
    students++; // this is also the same as students = students + 1

    negative = first::students - 1;

    remainder = students % 5;

    /*
    other methods can be
    negative-=1;
    negative--;
    */
    multi = students * 2;
    // or students*=2
    divi = students / 2;
    // or students /=2


    std::cout << "example of addition " << students << '\n';
    std::cout << "example of subtraction " << negative << '\n';
    std::cout << "example of multiplication" << multi << '\n';
    std::cout << "example of division" << divi << '\n';
    std::cout << "example of remainder" << remainder << '\n';

    //order of the process;
    // 1 \ parenthesis
    // 2 \ multiplication and division
    // 3 \ addition and subtraction

    return 0;
}