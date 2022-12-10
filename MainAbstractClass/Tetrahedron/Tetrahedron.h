#ifndef FOUTHLAB_TETRAHEDRON_H
#define FOUTHLAB_TETRAHEDRON_H

#include "../MainAbstractClass.h"

#include <iostream>
#include <cmath>

using namespace std;

class Tetrahedron : public MainAbstractClass {
public:
    Tetrahedron(double baseSideSize);
    Tetrahedron(const Tetrahedron &someObj);
    Tetrahedron();
    ~Tetrahedron();
    virtual void setBaseSideSize(double baseSideSize);
    double searchSquare() override;
    double searchVolume() override;
};


#endif //FOUTHLAB_TETRAHEDRON_H
