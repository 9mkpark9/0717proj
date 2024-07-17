//
// Created by WSU on 24. 7. 17.
//

#ifndef DRINK_H
#define DRINK_H

#endif //DRINK_H

#pragma once

class Drink
{
private:
    int id;
    string name;
    int price;
public:
    Drink(int _id, string _name, int _price);

public:
    int get_id() const;
    string get_name() const;
    int get_price() const;
    void set_price(int value);

public:
    void print() const;
    void println() const;
};