#include <iostream>

//namespaces => it's so that a variable may have multiple values as long as the namespace is different

namespace first{
    int x = 5;
}
namespace second{
    int x = 10;
}


main(){
    int x = 3;
    std::cout << "This is the demonstration of what namespaces can do. " << '\n';
    std::cout << x << " This will only show the local main x variable declaration" << '\n';
    std::cout << first::x << " This will show the first namespace x variable declaration" << '\n';
    std::cout << second::x << " This will show the second namespace x variable declaration" << '\n';
    return 0;
}