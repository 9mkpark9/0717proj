#include "std.h"

Drink::Drink(int _id, string _name, int _price)
: id(_id), name(_name), price(_price) {}

int Drink::get_id() const
{
    return id;
}
string Drink::get_name() const
{
    return name;
}
int Drink::get_price() const
{
    return price;
}
void Drink::set_price(int value)
{
    price = value;
}
void Drink::print() const
{
    cout << id << "\t" << name << "\t" << price << "원" << endl;
}
void Drink::println() const
{
    cout << "제품번호 : " << id << endl;
    cout << "제품 명 : " << name << endl;
    cout << "가   격 : " << price << endl;

}
