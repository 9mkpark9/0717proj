#include "std.h"

void App::init()
{
    system("cls");
    cout<<"**********************************************"<<endl;
    cout<<" 우송비트 단기 과정"<<endl;
    cout<<" C++언어 프로그래밍"<<endl;
    cout<<" 음료수 관리 프로그램"<<endl;
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
        cout<<" [1] 저장(insert)"<<endl;
        cout<<" [2] 검색(select)"<<endl;
        cout<<" [3] 수정(update)"<<endl;
        cout<<" [4] 삭제(delete)"<<endl;
        cout<<" [5] 종료(exit)"<<endl;
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
    cout<<" 프로그램 종료"<<endl;
    cout<<"**********************************************"<<endl;
    system("pause");
}