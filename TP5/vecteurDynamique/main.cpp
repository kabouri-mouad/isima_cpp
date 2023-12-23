#include <iostream>
#include <algorithm>
#include <cstring>

class DynamicVector {
    private:
        double* data;         // pointeur vers le tableau de données
        size_t currentSize;    // nombre d'éléments actuellement dans le tableau
        size_t currentCapacity; // capacité actuelle du tableau

    public:
        // Constructeur par défaut avec capacité par défaut de 10
        DynamicVector(size_t capacity = 10) : currentSize(0), currentCapacity(capacity) {
            data = new double[capacity];
        }

        // Constructeur de copie
        DynamicVector(const DynamicVector& other) : currentSize(other.currentSize), currentCapacity(other.currentCapacity) {
            data = new double[currentCapacity];
            std::memcpy(data, other.data, currentSize * sizeof(double));
        }

        // Opérateur d'assignation
        DynamicVector& operator=(const DynamicVector& other) {
            if (this != &other) {
                delete[] data;
                currentSize = other.currentSize;
                currentCapacity = other.currentCapacity;
                data = new double[currentCapacity];
                std::memcpy(data, other.data, currentSize * sizeof(double));
            }
            return *this;
        }

        // Destructeur
        ~DynamicVector() {
            delete[] data;
        }

        // Méthode pour obtenir la capacité du vecteur
        size_t capacity() const {
            return currentCapacity;
        }

        // Méthode pour obtenir la taille actuelle du vecteur
        size_t size() const {
            return currentSize;
        }

        // Méthode pour ajouter un élément à la fin du vecteur
        void push_back(double value) {
            if (currentSize == currentCapacity) {
                // Le tableau est plein, allouer un nouveau tableau avec une capacité doublée
                currentCapacity *= 2;
                double* newData = new double[currentCapacity];
                std::memcpy(newData, data, currentSize * sizeof(double));
                delete[] data;
                data = newData;
            }

            // Ajouter l'élément à la fin du tableau
            data[currentSize++] = value;
        }

        // Opérateur d'indexation
        double& operator[](size_t index) {
            if (index >= currentSize) {
                throw std::out_of_range("Index out of bounds");
            }
            return data[index];
        }

        // Opérateur d'indexation constant
        const double& operator[](size_t index) const {
            if (index >= currentSize) {
                throw std::out_of_range("Index out of bounds");
            }
            return data[index];
        }

        // Fonction de concaténation
        DynamicVector operator+(const DynamicVector& other) const {
            DynamicVector result(currentSize + other.currentSize);
            std::memcpy(result.data, data, currentSize * sizeof(double));
            std::memcpy(result.data + currentSize, other.data, other.currentSize * sizeof(double));
            result.currentSize = currentSize + other.currentSize;
            return result;
        }
};

// Fonction d'affichage pour faciliter les tests
void displayVector(const DynamicVector& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Test du vecteur dynamique
    DynamicVector vec1;
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
