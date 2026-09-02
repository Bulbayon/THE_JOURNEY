#include <iostream>
// type conversion => changes the type of a data

main(){

    // say we want to calculate a score in an exam

    int correct = 8;
    int total = 10;
    double score = correct / (double) total * 100;

    //if (double) was not added, then score = 0, since corrent and total were both int,
    // hench the result would have trunked the decimals

    std::cout << "The score was " << score << "%";


    return 0;
}