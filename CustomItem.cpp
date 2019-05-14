#include <iostream>
#include <string>
#include "CustomItem.h"

CustomItem::CustomItem(std::string size){
  this->size = size;
  if (size == "small") price = 3;
  else if (size == "medium") price = 5;
  else price = 6.5;
}

CustomItem::~CustomItem(){
//
}

void CustomItem::addTopping(std::string topping){
  this->price += 0.4;
  this->table["topping"]++;
}

double CustomItem::getPrice(){
  return this->price;
}

std::string CustomItem::composeItem(){
  std::string item;
  item += "Custom Size: " + this->size + "\n";
  item += "Toppings:" + "\n";
  for (std::map<std::string, int>::iterator it = table.begin(); it != table.end(); it++){
    item += it->first + ": " + it->second + " oz\n"
  }
  return item;
}
