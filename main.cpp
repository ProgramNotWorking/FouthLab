#include "MainAbstractClass/Prism/Prism.h"
#include "MainAbstractClass/Tetrahedron/Tetrahedron.h"
#include "MainAbstractClass/Tetrahedron/TruncatedTetrahedron/TruncatedTetrahedron.h"

#include <iostream>

using namespace std;

int main() {
    int figureCase;
    cout << "Which figure do you want to interact with:" << endl;
    cout << "1) Prism" << endl << "2) Tetrahedron" << endl
        << "3) Truncated Tetrahedron" << endl;
    cout << "Enter another number to exit" << endl;
    cin >> figureCase;

    if (figureCase == 1) {
        double baseSideSize;
        double height;
        cout << "Enter base side size: ";
        cin >> baseSideSize;
        cout << "Enter sideFacetSize size: ";
        cin >> height;

        Prism prism(baseSideSize, height);
        cout << "Ur prism square: " << prism.searchSquare() << endl;
        cout << "Ur prism volume: " << prism.searchVolume() << endl;
    } else if (figureCase == 2) {
        double baseSideSize;
        cout << "Enter base side size: ";
        cin >> baseSideSize;

        Tetrahedron tetrahedron(baseSideSize);
        cout << "Ur tetrahedron square: " << tetrahedron.searchSquare() << endl;
        cout << "Ur tetrahedron volume: " << tetrahedron.searchVolume() << endl;
    } else if (figureCase == 3) {
        double baseSideSize;
        double height;
        double upperBaseSideSize;
        cout << "Enter base side size: ";
        cin >> baseSideSize;
        cout << "Enter sideFacetSize size: ";
        cin >> height;
        cout << "Enter upper base side size: ";
        cin >> upperBaseSideSize;

        TruncatedTetrahedron truncatedTetrahedron(baseSideSize, height, upperBaseSideSize);
        cout << "Ur truncated tetrahedron square: " << truncatedTetrahedron.searchSquare() << endl;
        cout << "Ur truncated tetrahedron volume: " << truncatedTetrahedron.searchVolume() << endl;
        cout << "Ur truncated tetrahedron base's coefficient: " << truncatedTetrahedron.searchCoefficient() << endl;
    } else return 0;
}
