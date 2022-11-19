#include "TruncatedTetrahedron.h"

TruncatedTetrahedron::TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize) : Tetrahedron(baseSideSize) {
    this->baseSideSize = baseSideSize;
    this->upperBaseSideSize = upperBaseSideSize;
    this->sideFacetSize = sideFacetSize;
}

TruncatedTetrahedron::~TruncatedTetrahedron() = default;

double TruncatedTetrahedron::searchSquare() {
    double apothem = sqrt(pow(sideFacetSize, 2) - pow(baseSideSize / 4, 2));
    return 1 / 2 * (3 * baseSideSize + 3 * upperBaseSideSize) * apothem;
}

double TruncatedTetrahedron::searchVolume() {
    double downBaseSquare = (pow(baseSideSize, 2) * sqrt(3)) / 4;
    double upperBaseSquare = (pow(upperBaseSideSize, 2) * sqrt(3)) / 4;
    double apothem = sqrt(pow(sideFacetSize, 2) - pow(baseSideSize / 4, 2));
    int height = sqrt(pow(apothem, 2) - pow((sqrt(3) / 6) * (baseSideSize - upperBaseSquare), 2));

    return 1 / 3 * height * (downBaseSquare + upperBaseSquare + sqrt(downBaseSquare * upperBaseSquare));
}

double TruncatedTetrahedron::searchCoefficient() {
    return upperBaseSideSize / baseSideSize;
}
