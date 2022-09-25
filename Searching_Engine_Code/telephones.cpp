#include <iostream>
#include <string>

using namespace std;

class Telephone {

public:
    short price;
    string name;
    string device_type = "Telephone";
    Telephone(string name_ = "Undefined telephone", short price_ = 0)
        :name(name_), price(price_)
    {}
    string property_text[4] = { "Front camera", "Side Camera", "Display size", "Processor" };

    string properties[4];
    void set_name(string name_) {
        name = name_;
    }
    void set_price(short price_) {
        price = price_;
    }
};

