#include <iostream>
#include <vector>

// Typedef / using can make declaration of complicated datatypes easier, 
// or even something as simple as strings


typedef std::string text_t;
using text2_t = std::string;

// both of these mean the same thing that being data type, string

// How Typedef / using is used on a way more high level of programming:
// to create a pairlist datatype

typedef std::vector<std::pair<std::string, int>> pairlist_t;
using pairlist2_t = std::vector<std::pair<std::string, int>>;

int main(){
    // declaration of first name, for example
    text_t first_name = "Rusa";
    text2_t last_name = "Cambo";

    std::cout << first_name << " " << last_name;
    return 0;
}