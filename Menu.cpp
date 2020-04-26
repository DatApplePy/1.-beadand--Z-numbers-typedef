#include <iostream>
#include "Menu.h"

void Menu::run()
{
    int v = 0;
    do
    {
        menuWrite();
        std::cin >> v;
        std::cout << std::endl;
        switch(v)
        {
            case 1: case1(); break;
            case 2: case2(); break;
            case 3: case3(); break;
            case 4: case4(); break;
            case 5: case5(); break;
        }
    }
    while (v != 0);
}
//--------------------------------------------------
void Menu::menuWrite()
{
    std::cout << "0 - Exit\n";
    std::cout << "1 - putIn\n";
    std::cout << "2 - takeOut\n";
    std::cout << "3 - isInclude\n";
    std::cout << "4 - evenCount\n";
    std::cout << "5 - printOut\n";
    std::cout << "Select: ";
}
//--------------------------------------------------
void Menu::case1()
{
    std::cout << "putIn\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "Figyelem!\nCsak egesz szamot adjon meg!\n";
    std::cout << "A berakni kivant ertek: ";

    int Size = H1.getSize();
    int var;
    std::cin >> var;
    H1.putIn(var);

    if(Size == H1.getSize())
    {
      std::cout << "Az elem mar benne van a halmazban.";
    }

    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case2()
{
    std::cout << "takeOut\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "A torolni kivant ertek: ";

    int Size = H1.getSize();
    int var;
    std::cin >> var;
    H1.takeOut(var);

    if(Size == H1.getSize())
    {
      std::cout << "A torolni kivant ertek nem talalhato a halmazban.";
    }

    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case3()
{
    std::cout << "isInclude\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "Visszaadja, hogy a keresett elem benne van-e a halmazban.\n";
    std::cout << "A keresett ertek: ";

    int var;
    std::cin >> var;
    if(H1.isInclude(var))
    {
        std::cout << "A keresett elem benne van a halmazban.\n";
    }
    else
    {
        std::cout << "A keresett elem nincs benne a halmazban.\n";
    }

    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case4()
{
    std::cout << "evenCount\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "Visszaadja, hogy hany darab paros szam talalhato a halmazban.\n";

    int Db;
    Db = H1.evenCount();

    std::cout << "A halmazban " << Db << " darab paros szam talalhato.\n";

    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case5()
{
    std::cout << "printOut\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "A halmaz elemei: ";
    std::cout << H1;

    std::cout << std::endl;
}
