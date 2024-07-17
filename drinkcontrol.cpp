//drinkcontrol.c
#include "std.h"
DrinkControl::DrinkControl(): count(0), max(DATA_MAX) {}

void DrinkControl::dc_insert()
{
    printf("\n[저장]\n");

    if (count >= max)
    {
        cout << "Overflow" << endl;
        return;
    }

    int id = WbLib::input_integer("제품번호");
    string name = WbLib::input_string("제품명");
    int  price = WbLib::input_integer("제품가격");

    Drink* pdrink = new Drink(id, name, price);

    drinks[count] = pdrink;
    count++;

    printf("저장되었습니다\n");
}

void DrinkControl::dc_select()
{
    printf("\n[검색]\n");

    string name = WbLib::input_string("제품명");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("없는 제품\n");
    }
    else
    {
        Drink* drink = drinks[idx];
        drink->println();
    }
}

void DrinkControl::dc_update()
{
    printf("[수정]\n");

    string name = WbLib::input_string("제품명");
    int  price = WbLib::input_integer("변경할 가격");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("없는 제품\n");
    }
    else
    {
        Drink* drink = drinks[idx];
        drink->set_price(price);

        printf("가격 변경\n");
    }
}

void DrinkControl::dc_delete()
{
    printf("\n[삭제]\n");

    string name = WbLib::input_string("제품명");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("없는 제품\n");
    }
    else
    {
        for (int i = idx; i < count; i++)
        {
            drinks[i] = drinks[i + 1];
        }
        count--;

        printf("삭제 성공\n");
    }
}

void DrinkControl::dc_printall()
{
    for (int i = 0; i < DATA_MAX; i++)
    {
        Drink* drink = drinks[i];
        drink->print();
    }
}

//순차검색
int  DrinkControl::nametoidx(string name)
{
    for (int i = 0; i < count; i++)
    {
        Drink* drink = drinks[i];

        if (drink->get_name() == name)
        {
            return i;
        }
    }
    return -1;
}