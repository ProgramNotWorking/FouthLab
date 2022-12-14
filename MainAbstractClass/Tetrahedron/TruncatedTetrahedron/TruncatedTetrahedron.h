#ifndef FOUTHLAB_TRUNCATEDTETRAHEDRON_H
#define FOUTHLAB_TRUNCATEDTETRAHEDRON_H

#include "../Tetrahedron.h"

class TruncatedTetrahedron : public Tetrahedron {
private:
    double upperBaseSideSize{0};
    double sideFacetSize{0};

public:
    TruncatedTetrahedron(double baseSideSize, double sideFacetSize, double upperBaseSideSize);
    TruncatedTetrahedron(const TruncatedTetrahedron &someObj);
    TruncatedTetrahedron();
    ~TruncatedTetrahedron();
    void setBaseSideSize(double baseSideSize) override;
    double searchSquare() override;
    double searchVolume() override;
    double searchCoefficient();
    void setSideFacetSize();
    void setUpperBaseSideSize();
};


#endif //FOUTHLAB_TRUNCATEDTETRAHEDRON_H
