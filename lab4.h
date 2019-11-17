#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vase {
private:
    int volume;
    int weight;
    string material;
protected:
    string colour;
    double price;
public:
    int quantity;
    string country;
    Vase(int _volume, int _weight, string _material, string _colour, double _price);
    ~Vase();
    int GetVolume();
    int GetWeight();
    string GetMaterial();
    string GetColour();
    double GetPrice();
    void GetWorld();
};
