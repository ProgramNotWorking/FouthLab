#ifndef FOUTHLAB_PRISM_H
#define FOUTHLAB_PRISM_H

#include "../MainAbstractClass.h"

#include <cmath>

using namespace std;

class Prism : public MainAbstractClass {
private:
    double baseSideSize;
    double height;

public:
    Prism(double baseSideSize, double height);
    ~Prism();
    double searchSquare() override;
    double searchVolume() override;
};


#endif //FOUTHLAB_PRISM_H
