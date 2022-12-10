#include "MainAbstractClass/Prism/Prism.h"
#include "MainAbstractClass/Tetrahedron/Tetrahedron.h"
#include "MainAbstractClass/Tetrahedron/TruncatedTetrahedron/TruncatedTetrahedron.h"

#include <iostream>

using namespace std;

int main() {
    double baseSideSize;
    cout << "Enter base side size: ";
    cin >> baseSideSize;

    Prism prism;
    prism.setBaseSideSize(baseSideSize);
    Tetrahedron tetrahedron;
    tetrahedron.setBaseSideSize(baseSideSize);
    TruncatedTetrahedron truncatedTetrahedron;
    truncatedTetrahedron.setBaseSideSize(baseSideSize);

    int figureCase;
    cout << "Which figure do you want to interact with:" << endl;
    cout << "1) Prism" << endl
         << "2) Tetrahedron" << endl
         << "3) Truncated Tetrahedron" << endl;
    cout << "Enter another number to exit" << endl;
    cin >> figureCase;

    if (figureCase == 1) {
        MainAbstractClass *pmainAbstractClass = &prism;
        prism.setHeight();

        cout << "Ur prism square: " << pmainAbstractClass->searchSquare() << endl;
        cout << "Ur prism volume: " << pmainAbstractClass->searchVolume() << endl;
    } else if (figureCase == 2) {
        MainAbstractClass *pmainAbstractClass = &tetrahedron;

        cout << "Ur tetrahedron square: " << pmainAbstractClass->searchSquare() << endl;
        cout << "Ur tetrahedron volume: " << pmainAbstractClass->searchVolume() << endl;
    } else if (figureCase == 3) {
        MainAbstractClass * pmainAbstractClass = &truncatedTetrahedron;
        truncatedTetrahedron.setUpperBaseSideSize();
        truncatedTetrahedron.setSideFacetSize();

        cout << "Ur truncated tetrahedron square: " << pmainAbstractClass->searchSquare() << endl;
        cout << "Ur truncated tetrahedron volume: " << pmainAbstractClass->searchVolume() << endl;
        cout << "Ur truncated tetrahedron base's coefficient: " << truncatedTetrahedron.searchCoefficient() << endl;
    } else return 0;
}
