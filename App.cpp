#include "std.h"

void App::init()
{
    system("cls");
    cout<<"**********************************************"<<endl;
    cout<<" ��ۺ�Ʈ �ܱ� ����"<<endl;
    cout<<" C++��� ���α׷���"<<endl;
    cout<<" ����� ���� ���α׷�"<<endl;
    cout<<" 2024.07.17"<<endl;
    cout<<"**********************************************"<<endl;
    system("pause");
}

void App::run()
{
    while (true)
        {
        system("cls");
        con.dc_printall();
        cout<<"**********************************************"<<endl;
        cout<<" [1] ����(insert)"<<endl;
        cout<<" [2] �˻�(select)"<<endl;
        cout<<" [3] ����(update)"<<endl;
        cout<<" [4] ����(delete)"<<endl;
        cout<<" [5] ����(exit)"<<endl;
        cout<<"**********************************************"<<endl;
        char idx = _getch();

        switch (idx)
        {
            case '1':
                con.dc_insert();
            break;
            case '2':
                con.dc_select();
            break;
            case '3':
                con.dc_update();
            break;
            case '4':
                con.dc_delete();
            break;
            case '5':
                return;
        }
    system("pause");
        }

}

void App::exit()
{
    system("cls");
    cout<<"**********************************************"<<endl;
    cout<<" ���α׷� ����"<<endl;
    cout<<"**********************************************"<<endl;
    system("pause");
}