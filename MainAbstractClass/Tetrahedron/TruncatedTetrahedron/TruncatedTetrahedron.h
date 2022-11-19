#ifndef FOUTHLAB_TRUNCATEDTETRAHEDRON_H
#define FOUTHLAB_TRUNCATEDTETRAHEDRON_H

#include "../Tetrahedron.h"

#include <cmath>

class TruncatedTetrahedron : public Tetrahedron {
private:
    double baseSideSize;
    double upperBaseSideSize;
    double sideFacetSize;

public:
    TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize);
    ~TruncatedTetrahedron();
    double searchSquare() override;
    double searchVolume() override;
    double searchCoefficient();
};


#endif //FOUTHLAB_TRUNCATEDTETRAHEDRON_H
