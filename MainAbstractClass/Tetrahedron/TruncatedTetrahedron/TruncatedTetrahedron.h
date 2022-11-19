#ifndef FOUTHLAB_TRUNCATEDTETRAHEDRON_H
#define FOUTHLAB_TRUNCATEDTETRAHEDRON_H

#include "../Tetrahedron.h"

#include <cmath>

class TruncatedTetrahedron : public Tetrahedron {
private:
    double upperBaseSideSize;
    double height;

public:
    TruncatedTetrahedron(double baseSideSize, double height, double upperBaseSideSize);
    ~TruncatedTetrahedron();
    double searchSquare() override;
    double searchVolume() override;
};


#endif //FOUTHLAB_TRUNCATEDTETRAHEDRON_H
