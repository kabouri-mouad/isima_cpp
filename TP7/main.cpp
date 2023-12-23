#include <iostream>
#include <algorithm>
#include <cstring>

// Fonction d'affichage pour faciliter les tests
void displayVector(const DynamicVector& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Test du vecteur dynamique
    DynamicVectorGen vec1;
    vec1.push_back(1.0);
    vec1.push_back(2.0);
    vec1.push_back(3.0);

    DynamicVector vec2 = vec1;
    vec2.push_back(4.0);
    vec2.push_back(5.0);

    DynamicVector vec3;
    vec3 = vec1 + vec2;

    std::cout << "Vector 1: ";
    displayVector(vec1);

    std::cout << "Vector 2: ";
    displayVector(vec2);

    std::cout << "Vector 3 (concatenation of Vector 1 and Vector 2): ";
    displayVector(vec3);

    return 0;
}
