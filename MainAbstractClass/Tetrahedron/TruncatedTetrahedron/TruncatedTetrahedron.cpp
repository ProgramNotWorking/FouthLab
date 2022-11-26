#include "TruncatedTetrahedron.h"

TruncatedTetrahedron::TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize) : Tetrahedron(baseSideSize) {
    this->baseSideSize = baseSideSize;
    this->upperBaseSideSize = upperBaseSideSize;
    this->sideFacetSize = sideFacetSize;
}

TruncatedTetrahedron::~TruncatedTetrahedron() = default;

double TruncatedTetrahedron::searchSquare() {
    double apothem = sqrt(pow(sideFacetSize, 2) - pow((baseSideSize - upperBaseSideSize), 2) / 4);
    return 3.0 / 2.0 * (baseSideSize + upperBaseSideSize) * apothem;
}

double TruncatedTetrahedron::searchVolume() {
    double auxiliaryHeight = sqrt(pow(sideFacetSize, 2) - pow((baseSideSize - upperBaseSideSize), 2));
    return 1.0 / 6.0 * auxiliaryHeight * (sqrt(3) * (pow(baseSideSize, 2) + pow(upperBaseSideSize, 2) / 2)
        + baseSideSize * upperBaseSideSize * sqrt(sqrt(3) / 2));
}

double TruncatedTetrahedron::searchCoefficient() {
    return upperBaseSideSize / baseSideSize;
}

double TruncatedTetrahedron::setBaseSideSize() {
    cout << "Enter base side size: ";
    cin >> baseSideSize;
    return baseSideSize;
}

double TruncatedTetrahedron::setSideFacetSize() {
    cout << "Enter side facet size: ";
    cin >> sideFacetSize;
    return sideFacetSize;
}

double TruncatedTetrahedron::setUpperBaseSideSize() {
    cout << "Enter upper base side size: ";
    cin >> upperBaseSideSize;
    return upperBaseSideSize;
}
