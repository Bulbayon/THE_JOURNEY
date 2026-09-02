#include <iostream>

typedef std::string str;
using str= std:: string;

main(){
    str name;
    int age;

    std::cout << "What's your age?" << '\n';
    std::cin >> age;


    std::cout << "What's your name?" << '\n';
    std::getline(std::cin >> std::ws, name);


    /*
    if there is an input ( std:: cin >> something ) above a getline
    the std:: cin generates a \n
    getline => reads everything until it hits a \n 
    so it automatically detect \n at the second input and skips it

    the solution is to add a >> std::ws inside the getline function
    
    */

    std::cout << "Hello " << name << "." << '\n';
    std::cout << "You are aged " << age << "." << '\n';

    // in vsc, you need to be on the terminal to be able to input a string
    // go to file >> preferences >> settings >> look up 'code runner'
    // >> enable run in terminal
    return 0;
}