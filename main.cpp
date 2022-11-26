#include "MainAbstractClass/Prism/Prism.h"
#include "MainAbstractClass/Tetrahedron/Tetrahedron.h"
#include "MainAbstractClass/Tetrahedron/TruncatedTetrahedron/TruncatedTetrahedron.h"

#include <iostream>

using namespace std;

int main() {
    int figureCase;
    cout << "Which figure do you want to interact with:" << endl;
    cout << "1) Prism" << endl
         << "2) Tetrahedron" << endl
         << "3) Truncated Tetrahedron" << endl;
    cout << "Enter another number to exit" << endl;
    cin >> figureCase;

    if (figureCase == 1) {
        Prism prism(prism.setBaseSideSize(), prism.setHeight());
        cout << "Ur prism square: " << prism.searchSquare() << endl;
        cout << "Ur prism volume: " << prism.searchVolume() << endl;
    } else if (figureCase == 2) {
        Tetrahedron tetrahedron(tetrahedron.setBaseSideSize());
        cout << "Ur tetrahedron square: " << tetrahedron.searchSquare() << endl;
        cout << "Ur tetrahedron volume: " << tetrahedron.searchVolume() << endl;
    } else if (figureCase == 3) {
        TruncatedTetrahedron truncatedTetrahedron(truncatedTetrahedron.setBaseSideSize(),
                                                  truncatedTetrahedron.setSideFacetSize(),
                                                  truncatedTetrahedron.setUpperBaseSideSize());
        cout << "Ur truncated tetrahedron square: " << truncatedTetrahedron.searchSquare() << endl;
        cout << "Ur truncated tetrahedron volume: " << truncatedTetrahedron.searchVolume() << endl;
        cout << "Ur truncated tetrahedron base's coefficient: " << truncatedTetrahedron.searchCoefficient() << endl;
    } else return 0;
}
