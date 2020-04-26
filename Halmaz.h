#pragma once
#include <iostream>
#include <vector>

class Halmaz
{
    private:
        std::vector<int> _x;
        int evenNums;

    public:
        Halmaz(){evenNums = 0;}
        ~Halmaz(){}
        void putIn(const int& e);
        void takeOut(const int& e);
        bool isInclude(const int& e) const;
        int evenCount() const;
        friend std::ostream& operator<<(std::ostream& o, const Halmaz &p); //printOut
        int getSize() const;
};
