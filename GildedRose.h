#pragma once

#include <string>
using std::string;

// This is already done for you...
class Item {
public:
    string name;
    int sellIn;
    int quality;
    Item(string, int, int);
};

Item::Item(string new_name, int new_sellIn, int new_quality)
: name(new_name), sellIn(new_sellIn), quality(new_quality) {
}


// This class is incomplete...
class GildedRose {
private:
    // Add something to hold at least 10 items

public:
    GildedRose();
    ~GildedRose();

    size_t size() const;
    Item& get(size_t);
    void add(const Item&);

    Item& operator[](size_t);
};
