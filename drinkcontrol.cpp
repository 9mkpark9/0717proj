//drinkcontrol.c
#include "std.h"
DrinkControl::DrinkControl(): count(0), max(DATA_MAX) {}

void DrinkControl::dc_insert()
{
    printf("\n[����]\n");

    if (count >= max)
    {
        cout << "Overflow" << endl;
        return;
    }

    int id = WbLib::input_integer("��ǰ��ȣ");
    string name = WbLib::input_string("��ǰ��");
    int  price = WbLib::input_integer("��ǰ����");

    Drink* pdrink = new Drink(id, name, price);

    drinks[count] = pdrink;
    count++;

    printf("����Ǿ����ϴ�\n");
}

void DrinkControl::dc_select()
{
    printf("\n[�˻�]\n");

    string name = WbLib::input_string("��ǰ��");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("���� ��ǰ\n");
    }
    else
    {
        Drink* drink = drinks[idx];
        drink->println();
    }
}

void DrinkControl::dc_update()
{
    printf("[����]\n");

    string name = WbLib::input_string("��ǰ��");
    int  price = WbLib::input_integer("������ ����");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("���� ��ǰ\n");
    }
    else
    {
        Drink* drink = drinks[idx];
        drink->set_price(price);

        printf("���� ����\n");
    }
}

void DrinkControl::dc_delete()
{
    printf("\n[����]\n");

    string name = WbLib::input_string("��ǰ��");

    int idx = nametoidx(name);
    if (idx == -1)
    {
        printf("���� ��ǰ\n");
    }
    else
    {
        for (int i = idx; i < count; i++)
        {
            drinks[i] = drinks[i + 1];
        }
        count--;

        printf("���� ����\n");
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

//�����˻�
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