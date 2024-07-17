//
// Created by WSU on 24. 7. 17.
//

#ifndef DRINKCONTROL_H
#define DRINKCONTROL_H

#endif //DRINKCONTROL_H

#pragma once

#define DATA_MAX	10
class DrinkControl
{
private:
    Drink* drinks[DATA_MAX];
    int count;
    int max;
public:
    DrinkControl();
public:
    void dc_insert();
    void dc_select();
    void dc_update();
    void dc_delete();
    void dc_printall();
private:
    int  nametoidx(string name);
};
