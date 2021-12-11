#include <iostream>
#include"c_Hero.h"
using namespace std;
int main()
{
    c_Hero c_hero;
    int vibor;
    do
    {
        c_hero.print();
        cout << "\nMenu\n";
        cout << "1 - Hit\n";
        cout << "2 - Protection\n";
        cout << "3 - Go forward\n";
        cout << "4 - Go back\n";
        cout << "5 - Go right\n";
        cout << "6 - Go left\n";
        cout << "0 - Exit\n\n";
        cout << "Choice of action: ";
        cin >> vibor;
        if (vibor == 0)
        {
            system("cls");
            cout << "You go out!!!\n";
            break;
        }
        switch (vibor)
        {
        case 1:
            system("cls");
            c_hero.hit();
            system("cls");
            break;
        case 2:
            system("cls");
            c_hero.protection();
            system("cls");
            break;
        case 3: case 4: case 5: case 6:
            system("cls");
            if (c_hero.getHealth() < 100 && c_hero.getDamage()<100)
            {
                c_hero.go();
            }
            else
            {
                cout << "The hero recovered\n";
                system("pause");
            }
            system("cls");
            break;

        default:
            system("cls");
            cout << "You selected a nonexistent item\n";
            system("pause");
            system("cls");
            break;
        }
        if (c_hero.getDamage() == 0)
        {
            cout << "Go to restore!!!\n";
        }

    } while (c_hero.getHealth() > 0);
    if (c_hero.getHealth() < 0 || c_hero.getHealth() == 0)
    {
        cout << "Your hero died!!!\n";
    }
}