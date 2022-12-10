#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(double baseSideSize) {
    this->baseSideSize = baseSideSize;
}

Tetrahedron::Tetrahedron(const Tetrahedron &someObj) : MainAbstractClass(someObj) {
    this->baseSideSize = someObj.baseSideSize;
}

Tetrahedron::Tetrahedron() {
    this->baseSideSize = 0;
}

Tetrahedron::~Tetrahedron() = default;

void Tetrahedron::setBaseSideSize(double baseSideSize) {
    MainAbstractClass::baseSideSize = baseSideSize;
}

double Tetrahedron::searchSquare() {
    return pow(getBaseSideSize(), 2) * sqrt(3);
}

double Tetrahedron::searchVolume() {
    return (pow(getBaseSideSize(), 3) * sqrt(2)) / 12;
}
