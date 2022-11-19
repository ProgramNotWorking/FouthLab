#include "TruncatedTetrahedron.h"

TruncatedTetrahedron::TruncatedTetrahedron(double baseSideSize, double height, double upperBaseSideSize) : Tetrahedron(baseSideSize) {
    this->upperBaseSideSize = upperBaseSideSize;
    this->height = height;
}

TruncatedTetrahedron::~TruncatedTetrahedron() = default;

double TruncatedTetrahedron::searchSquare() {
    // TODO: ask Masha to algorithm
}

double TruncatedTetrahedron::searchVolume() {
    return 1 / 3 * height * (((pow(getBaseSideSize(), 2) * sqrt(3)) / 4) +
        ((pow(upperBaseSideSize, 2) * sqrt(3)) / 4) +
        (sqrt(((pow(getBaseSideSize(), 2) * sqrt(3)) / 4) * (pow(upperBaseSideSize, 2) * sqrt(3)) / 4)));
}
