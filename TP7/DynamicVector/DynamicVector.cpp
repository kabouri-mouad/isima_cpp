#include "DynamicVector.hpp"

DynamicVector::DynamicVector(size_t capacity = 10) : currentSize(0), currentCapacity(capacity) {
    data = new double[capacity];
}

// Constructeur de copie
DynamicVector::DynamicVector(const DynamicVector& other) : currentSize(other.currentSize), currentCapacity(other.currentCapacity) {
    data = new double[currentCapacity];
    std::memcpy(data, other.data, currentSize * sizeof(double));
}

// Opérateur d'assignation
DynamicVector& DynamicVector::operator=(const DynamicVector& other) {
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
DynamicVector::~DynamicVector() {
    delete[] data;
}

// Méthode pour obtenir la capacité du vecteur
size_t DynamicVector::capacity() const {
    return currentCapacity;
}

// Méthode pour obtenir la taille actuelle du vecteur
size_t DynamicVector::size() const {
    return currentSize;
}

// Méthode pour ajouter un élément à la fin du vecteur
void DynamicVector::push_back(double value) {
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
double& DynamicVector::operator[](size_t index) {
    if (index >= currentSize) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

// Opérateur d'indexation constant
const double& DynamicVector::operator[](size_t index) const {
    if (index >= currentSize) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

// Fonction de concaténation
DynamicVector DynamicVector::operator+(const DynamicVector& other) const {
    DynamicVector result(currentSize + other.currentSize);
    std::memcpy(result.data, data, currentSize * sizeof(double));
    std::memcpy(result.data + currentSize, other.data, other.currentSize * sizeof(double));
    result.currentSize = currentSize + other.currentSize;
    return result;
}