#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
using namespace std;

int main()
{
    // --- Osoitin ---
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int* pointerA = &a;
    cout << "Pointerin osoittama osoite on: " << pointerA << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // --- Referenssi ---
    int& refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    // refA = &b;   // EI ONNISTU (referenssin kohdetta ei voi vaihtaa)
    pointerA = &b; // Tämä onnistuu
    cout << "\nPointerA osoittaa nyt osoitteeseen: " << pointerA
         << " jonka arvo on: " << *pointerA << endl;

    cout << "\n--- Oliot kopiona ---" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);  // Kopio
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "\n--- Oliot referenssillä ---" << endl;

    ClassB& refB = objB;
    ClassA2 objA2(refB); // viittaus alkuperäiseen objB:hen
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
