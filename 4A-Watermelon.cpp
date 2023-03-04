
#include <iostream>

int main(int argc, char* argv[]) {

    int w;
    std::cin >> w;

    if (w > 2 && !(w % 2)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}