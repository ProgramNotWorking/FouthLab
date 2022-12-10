#ifndef FOUTHLAB_MAINABSTRACTCLASS_H
#define FOUTHLAB_MAINABSTRACTCLASS_H


class MainAbstractClass {
protected:
    double baseSideSize{};
//    double height;
//    double sideFacetSize;
//    double upperBaseSideSize;

public:
    virtual double searchSquare() = 0;
    virtual double searchVolume() = 0;
    double getBaseSideSize() const;
};


#endif //FOUTHLAB_MAINABSTRACTCLASS_H
