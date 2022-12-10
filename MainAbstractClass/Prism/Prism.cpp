#include "Prism.h"

Prism::Prism(double baseSideSize, double height) {
    this->baseSideSize = baseSideSize;
    this->height = height;
}

Prism::Prism(const Prism &someObj) : MainAbstractClass(someObj) {
    this->height = someObj.height;
}

Prism::Prism() {
    this->height = 0;
}

Prism::~Prism() = default;

void Prism::setBaseSideSize(double baseSideSize) {
    MainAbstractClass::baseSideSize = baseSideSize;
}

double Prism::searchSquare() {
    return getBaseSideSize() * 3 * height;
}

double Prism::searchVolume() {
    return (pow(getBaseSideSize(), 2) * sqrt(3)) / 4;
}

void Prism::setHeight() {
    cout << "Enter height: ";
    cin >> height;
}
