#include <iostream>
#include "Halmaz.h"

void Halmaz::putIn(const int& e)
{
  bool isIn = false;

  for(unsigned int i = 0; !isIn && i < _x.size(); ++i)
  {
    if(e == _x[i])
    {
      isIn = true;
    }
  }

  if(!isIn)
  {
    _x.push_back(e);
    if(e % 2 == 0)
    {
      ++evenNums;
    }
  }
}
//--------------------------------------------------
void Halmaz::takeOut(const int& e)
{
  bool isIn = false;
  int Ind;

  for(unsigned int i = 0; !isIn && i < _x.size(); ++i)
  {
    if(e == _x[i])
    {
      isIn = true;
      Ind = i;
    }
  }

  if(isIn)
  {
    _x.erase(_x.begin()+Ind);
    if(e % 2 == 0)
    {
      --evenNums;
    }
  }
}
//--------------------------------------------------
bool Halmaz::isInclude(const int& e) const
{
  for (unsigned int i = 0; i < _x.size(); ++i)
  {
      if(_x[i] == e)
      {
          return true;
      }
  }
  return false;
}
//--------------------------------------------------
int Halmaz::evenCount() const
{
  return evenNums;
}
//--------------------------------------------------
std::ostream& operator<<(std::ostream& o, const Halmaz &p)
{
  for(unsigned int i = 0; i < p._x.size(); ++i)
  {
    o << p._x[i] << ", ";
  }
  return o;
}

int Halmaz::getSize() const
{
    return _x.size();
}
