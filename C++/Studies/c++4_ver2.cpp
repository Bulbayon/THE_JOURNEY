#include <iostream>

namespace first{
    int x = 3;
    int y = 5;
}

namespace second{
    int x = 4;
    int y = 3;
}


main(){
    using namespace second;
    
    std::cout << x + y << " This is the addition sum using the second namespace";

    return 0;
}