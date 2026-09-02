#include <iostream>

// INPUTS
// in c++, there are two "directions"
// std:: cout << (insertion operator)
// std:: cin >> (extraction operator)

typedef std::string str;
using str= std:: string;

main(){
    str name;
    int age;

    std::cout << "What's your name?" << '\n';
    std::getline(std::cin, name);

    // we use getline function => so that name will not stop once we hit spaces
    // ex. full names
    
    std::cout << "What's your age?" << '\n';
    std::cin >> age;

    std::cout << "Hello " << name << "." << '\n';
    std::cout << "You are aged " << age << "." << '\n';

    // in vsc, you need to be on the terminal to be able to input a string
    // go to file >> preferences >> settings >> look up 'code runner'
    // >> enable run in terminal
    return 0;
}