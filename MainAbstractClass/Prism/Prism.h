#ifndef FOUTHLAB_PRISM_H
#define FOUTHLAB_PRISM_H

#include "../MainAbstractClass.h"

#include <iostream>
#include <cmath>

using namespace std;

class Prism : public MainAbstractClass {
public:
    Prism(double baseSideSize, double height);
    ~Prism();
    double searchSquare() override;
    double searchVolume() override;
    double setBaseSideSize();
    double setHeight();
};


#endif //FOUTHLAB_PRISM_H
