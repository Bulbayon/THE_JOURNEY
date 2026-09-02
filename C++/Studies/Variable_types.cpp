#include <iostream>

int main(){

    //integer data type => stores only whole numbers
    int age = 23;
    int year = 2003;
    int days = 19;

    //double data type => stores numbers with decimals
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //Single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (True or False) Think of it as a lightswitch -> two options on or off
    bool student = true;
    bool power = false;
    bool forsale = true;

    //String -> Object that represents sequences of text

    //unlike the rest of the data types, strings are declared using std
    std::string name = "Popsy";
    std::string day = "Friday";
    std::string address = "Boulevard 123";

    std::cout << name;

    std::cout << price << '\n';
    std::cout << currency;
    std::cout << initial << '\n';

    //you can attach strings together like

    std::cout << "Hello " << name << " from " << address << " Nice " << day << " is it not?";

    //do mindful of the spacings

    //also possible to mix em up

    std::cout << "Hello, my name is " << name << " and I am " << age << " yeard old. " << '\n';
    std::cout << "My student_id is " << student << '\n';

    return 0;
}