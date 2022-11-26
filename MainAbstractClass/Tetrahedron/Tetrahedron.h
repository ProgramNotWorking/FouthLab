#ifndef FOUTHLAB_TETRAHEDRON_H
#define FOUTHLAB_TETRAHEDRON_H

#include "../MainAbstractClass.h"

#include <iostream>
#include <cmath>

using namespace std;

class Tetrahedron : public MainAbstractClass {
public:
    Tetrahedron(double baseSideSize);
    ~Tetrahedron();
    double searchSquare() override;
    double searchVolume() override;
    double setBaseSideSize();
};


#endif //FOUTHLAB_TETRAHEDRON_H
