#ifndef FOUTHLAB_TETRAHEDRON_H
#define FOUTHLAB_TETRAHEDRON_H

#include "../MainAbstractClass.h"

#include <cmath>

class Tetrahedron : public MainAbstractClass {
private:
    double baseSideSize;

public:
    Tetrahedron(double baseSideSize);
    ~Tetrahedron();
    double searchSquare() override;
    double searchVolume() override;
};


#endif //FOUTHLAB_TETRAHEDRON_H
