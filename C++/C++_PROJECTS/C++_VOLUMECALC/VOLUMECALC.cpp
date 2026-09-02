// interactive three dimensional shapes volume calculator

#include <iostream>
#include <cmath>

// typedef string variable

typedef std::string str;

// void functions for calculation
// main function

void sphere()
{
    const double pi = 3.141592653589793;
    const double fou_tree = 4.0/3.0;
    double radius;
    double result;
    double radius_final;

    std::cout << "Input radius magnitute: " << '\n';
    std::cin >> radius;

    radius_final = std::pow(radius, 3);
    result = radius_final*fou_tree*pi;

    std::cout << "Here is the result: " << '\n';
    std::cout << result;
    
    
}

void block()
{
    double x;
    double y;
    double z;
    double result;

    std::cout << "Please enter x:" << '\n';
    std::cin >> x;

    std::cout << "Please enter y:" << '\n';
    std::cin >> y;

    std::cout << "Please enter z:" << '\n';
    std::cin >> z;

    result = x*y*z;

    std::cout << "The result is: " << result << '\n';
    
}

void tube(){
    const double pi = 3.141592653589793;
    double radius;
    double height;
    double radius_squared;
    double result;

    //input
    std::cout << "Please enter the radius: " << '\n';
    std::cin >> radius;

    std::cout << "Please enter the height: " << '\n';
    std::cin >> height;


    radius_squared = pow(radius, 2);

    result = radius_squared*height*pi;

    std::cout << "The result is: " << '\n';
    std::cout << result;

}

void prism_trianglebase()
{
    // declare variables for area of triangle
    const double half = 1.0/2.0;
    double base;
    double height;

    // declare variables for volume
    double area_result;
    double prism_height;
    double final_result;

    //input for area of triangle
    std::cout << "Please enter the base of the triangle: " << '\n';
    std::cin >> base;

    std::cout << "Please enter the height of the triangle: " << '\n';
    std::cin >> height;

    //calculation area of triangle
    area_result = half*base*height;

    //input for volume
    std::cout << "Please enter the height of the prism: " << '\n';
    std::cin >> prism_height;

    //calculation for prism
    final_result = prism_height*area_result;

    //output
    std::cout << "The result is: " << final_result << '\n';
}


void cone(){
    // declare the variables and constant
    const double pi = 3.141592653589793;
    const double third = 1.0/3.0;
    double radius;
    double height;
    double radius_2;
    double result;

    // input radius
    std::cout << "Please insert the radius: " << '\n';
    std::cin >> radius;

    // input height
    std::cout << "Please insert the height: " << '\n';
    std::cin >> height;

    // power to the 2 the radius
    radius_2 = pow(radius, 2);

    // calculation
    result = pi*radius_2*(third*height);
    // output

    std::cout << "The result is equal to: " << result;
}

main(){
    // declare variables
    str response;


    //cout for reasoning
    std::cout << "What do you want to calculate? " << '\n';
    std::cout << "type the EXACT words, USE CAPS, USE SYMBOLS" << '\n';

    std::cout << "  SPHERE" << "\n";
    std::cout << "  BLOCK" << "\n";
    std::cout << "  TUBE" << "\n";
    std::cout << "  PRISM_TRIANGLEBASE" << "\n";
    std::cout << "  CONE" << "\n";

    //cin for input

    std::cin >> response;

    //use if to compare a person's answer
    if (response == "SPHERE")
    {
        sphere();
    }
    else if (response == "BLOCK")
    {
        block();
    }
    else if (response == "TUBE")
    {
        tube();
    }
    else if (response == "PRISM_TRIANGLEBASE")
    {
        prism_trianglebase();
    }
    else if (response == "CONE")
    {
        cone();
    }
    else
    {
        std::cout << "INVALID RESPONSE";
    }

    //call void functions
    return 0;
}

// BUGLOGS
// 1:57 AM !! When declaring a fraction, using just a / b will just make it a regular integer 
//ex. 4/3 is 1 cause integer trunk the decimals
// pi needs to be more accurate pi = 3.141592653589793
// 3:13 AM !! Bug fix on height -> prism_height

// FIX
// 1:58 AM !! Do a.0 / b.0 to make it a double