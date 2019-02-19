#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

// single item
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

// collection of items
class GildedRose {
private:
    vector<Item> list;

public:
    size_t index;


    GildedRose() : list() { }
    ~GildedRose(){ }

    size_t size() const { return list.size(); }
    Item& get(size_t index) { return list.at(index); }
    void add(const Item &item) { list.push_back(item); }

    Item& operator[](size_t index) { return get(index); }

};
