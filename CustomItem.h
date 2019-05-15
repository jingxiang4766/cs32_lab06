//Jing Su, 6839039

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <map>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem{
public:
  CustomItem(std::string size);
  virtual ~CustomItem();
  void addTopping(std::string topping);
  virtual double getPrice();
  virtual std::string composeItem();
private:
  std::map<std::string, int> table;
};

#endif
