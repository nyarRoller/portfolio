#include <string>
#ifndef GADGET_H
#define GADGET_H

struct Gadget{
    std::string name;
    int gType; //1 - Telephone 2 - Laptop 3 - TV
    double price;
    int year;
    double display;
    double battery;
};

#endif // GADGET_H
