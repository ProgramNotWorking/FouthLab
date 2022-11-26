#ifndef FOUTHLAB_TRUNCATEDTETRAHEDRON_H
#define FOUTHLAB_TRUNCATEDTETRAHEDRON_H

#include "../Tetrahedron.h"

class TruncatedTetrahedron : public Tetrahedron {
public:
    TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize);
    ~TruncatedTetrahedron();
    double searchSquare() override;
    double searchVolume() override;
    double searchCoefficient();
    double setBaseSideSize();
    double setSideFacetSize();
    double setUpperBaseSideSize();
};


#endif //FOUTHLAB_TRUNCATEDTETRAHEDRON_H
