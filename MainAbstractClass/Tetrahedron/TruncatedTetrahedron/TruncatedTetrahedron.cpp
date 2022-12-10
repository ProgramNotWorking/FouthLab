#include "TruncatedTetrahedron.h"

TruncatedTetrahedron::TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize) {
    this->baseSideSize = baseSideSize;
    this->upperBaseSideSize = upperBaseSideSize;
    this->sideFacetSize = sideFacetSize;
}

TruncatedTetrahedron::TruncatedTetrahedron(const TruncatedTetrahedron &someObj) : Tetrahedron(someObj) {
    this->upperBaseSideSize = someObj.upperBaseSideSize;
    this->sideFacetSize = someObj.sideFacetSize;
}

TruncatedTetrahedron::TruncatedTetrahedron() {
    this->upperBaseSideSize = 0;
    this->sideFacetSize = 0;
}

TruncatedTetrahedron::~TruncatedTetrahedron() = default;

void TruncatedTetrahedron::setBaseSideSize(double baseSideSize) {
    MainAbstractClass::baseSideSize = baseSideSize;
}

double TruncatedTetrahedron::searchSquare() {
    double apothem = sqrt(pow(sideFacetSize, 2) - pow((getBaseSideSize() - upperBaseSideSize), 2) / 4);
    return 3.0 / 2.0 * (getBaseSideSize() + upperBaseSideSize) * apothem;
}

double TruncatedTetrahedron::searchVolume() {
    double auxiliaryHeight = sqrt(pow(sideFacetSize, 2) - pow((getBaseSideSize() - upperBaseSideSize), 2));
    return 1.0 / 6.0 * auxiliaryHeight * (sqrt(3) * (pow(getBaseSideSize(), 2) + pow(upperBaseSideSize, 2) / 2)
        + getBaseSideSize() * upperBaseSideSize * sqrt(sqrt(3) / 2));
}

double TruncatedTetrahedron::searchCoefficient() {
    return upperBaseSideSize / getBaseSideSize();
}

void TruncatedTetrahedron::setSideFacetSize() {
    cout << "Enter side facet size: ";
    cin >> sideFacetSize;
}

void TruncatedTetrahedron::setUpperBaseSideSize() {
    cout << "Enter upper base side size: ";
    cin >> upperBaseSideSize;
}
