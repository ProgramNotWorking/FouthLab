#include "Prism.h"

Prism::Prism(double baseSideSize, double height) {
    this->baseSideSize = baseSideSize;
    this->height = height;
}

Prism::~Prism() = default;

double Prism::searchSquare() {
    return baseSideSize * 3 * height;
}

double Prism::searchVolume() {
    return (pow(baseSideSize, 2) * sqrt(3)) / 4;
}
