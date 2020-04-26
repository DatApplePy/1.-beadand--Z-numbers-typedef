using namespace std;

#define NORMAL_MODE

#ifdef NORMAL_MODE //--------------------------------

#include <iostream>
#include "Menu.h"

int main()
{
    Menu app;
    app.run();

    return 0;
}

#else //---------------------------------------------

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Halmaz.h"

TEST_CASE("putIn, takeOut, isInclude, evenCount")
{
    Halmaz halmaz;
    CHECK (halmaz.getSize() == 0);
    halmaz.putIn(1);
    CHECK (halmaz.getSize() == 1);
    halmaz.takeOut(1);
    CHECK (halmaz.getSize() == 0);

    for (int i = 0; i < 10; ++i)
    {
        halmaz.putIn(i);
    }
    CHECK (halmaz.evenCount() == 5);
    CHECK (halmaz.isInclude(5));
    CHECK_FALSE(halmaz.isInclude(100));

    for (int i = 1; i <= 10; ++i)
    {
        halmaz.takeOut(1);
    }
    for (int i = 0; i < 10000; ++i)
    {
        halmaz.putIn(i);
    }
    CHECK (halmaz.getSize() == 10000);

}

#endif
