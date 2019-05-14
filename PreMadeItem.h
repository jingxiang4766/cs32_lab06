#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <string>

class PreMadeItem : public IceCreamItem{
public:
  PreMadeItem(std::string name, std::string size);
  virtual ~PreMadeItem();
};
