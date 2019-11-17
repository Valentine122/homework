#include "lab4.h"
Vase::Vase(int _volume, int _weight, string _material, string _colour, double _price ) {
    volume = _volume;
    weight = _weight;
    material = _material;
    colour = _colour;
    price = _price;
}
Vase::~Vase() {}

int Vase::GetVolume() {
    return volume;
}
int Vase::GetWeight() {
    return weight;
}
string Vase::GetMaterial() {
    return material;
}

string Vase::GetColour() {
    return colour;
}
double Vase::GetPrice() {
    return price;
}

void Vase::GetWorld() {
    cout << "Volum in liters: " << GetVolume() << endl;
    cout << "Weight in kg:" << GetWeight() << endl;
    cout << "Material:" << GetMaterial() << endl;
    cout << "Country, where it was produced: " << country << endl;
    cout << "Price in Euros: " << GetPrice() << endl;
    cout << "Colour: " << GetColour() << endl;
    cout << "Available quantity: " << quantity << endl;
}

