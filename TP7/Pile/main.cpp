#include <iostream>
#include "PileGen.hpp"

int main() {

    using PileEntiers = PileGen<int>;

    PileEntiers p1;

    p1.push(10);
    p1.push(23);

    while(!p1.isEmpty()) {
        std::cout << p1.top() << "\n";
        p1.pop();
    }

    return 0;
}
