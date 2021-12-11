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
        cout << "6 - Go left\n\n";
        cout << "Choice of action: ";
        cin >> vibor;
        switch (vibor)
        {
        case 1:
            system("cls");
            c_hero.hit();
            system("cls");
            break;
        case 2:

            break;
        }

    } while (c_hero.getHealth() > 0);
    if (c_hero.getHealth() < 0 || c_hero.getHealth() == 0)
    {
        cout << "Your hero died!!!\n";
    }
   
    
   
}

