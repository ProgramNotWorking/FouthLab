#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(double baseSideSize) {
    this->baseSideSize = baseSideSize;
}

Tetrahedron::~Tetrahedron() = default;

double Tetrahedron::searchSquare() {
    return pow(baseSideSize, 2) * sqrt(3);
}

double Tetrahedron::searchVolume() {
    return (pow(baseSideSize, 3) * sqrt(2)) / 12;
}

double Tetrahedron::getBaseSideSize() { return baseSideSize; }
