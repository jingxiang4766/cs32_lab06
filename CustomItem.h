#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <map>

class CustomItem : public IceCreamItem{
public:
  CustomItem(std::string size);
  virtual ~CustomItem();
  void addTopping(std::string topping);
  std::string composeItem(&CustomItem);
private:

};
