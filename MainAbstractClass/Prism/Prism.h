#ifndef FOUTHLAB_PRISM_H
#define FOUTHLAB_PRISM_H

#include "../MainAbstractClass.h"

#include <iostream>
#include <cmath>

using namespace std;

class Prism : public MainAbstractClass {
private:
    double height{0};

public:
    Prism(double baseSideSize, double height);
    Prism(const Prism &someObj);
    Prism();
    ~Prism();
    void setBaseSideSize(double baseSideSize);
    double searchSquare() override;
    double searchVolume() override;
    void setHeight();
};


#endif //FOUTHLAB_PRISM_H
