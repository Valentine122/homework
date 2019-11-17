#include <iostream>
#include <string>
#include "lab4.cpp"
using namespace std;

int main() {
    // Vase(int volume, int material, string _colour, double _price);
    Vase A(10, 100,  "Horse", "grey", 50);
    A.quantity = 250;
    A.country = "Ukraine";
    Vase B(15, 123, "Ponos", "orange", 70);
    B.quantity = 150;
    B.country = "Greece";
    Vase C(12, 132, "Glopa", "dark", 60);
    C.quantity = 400;
    C.country = "Italy";
    cout << "Information about first Vase:\n ";
    A.GetWorld();
    cout << endl;
    cout << "Information about second Vase:\n ";
    B.GetWorld();
    cout << endl;
    cout << "Information about third Vase:\n ";
    C.GetWorld();
    cout << endl;
    return 0;
}
