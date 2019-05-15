#include <iostream>
#include <string>
#include "CustomItem.h"

CustomItem::CustomItem(std::string size):IceCreamItem(size){
  if (size == "small") this->price = 3;
  else if (size == "medium") this->price = 5;
  else this->price = 6.5;
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
  item += "Custom Size: ";
  item +=  this->size;
  item +=  "\n";
  item += "Toppings:";
  item +=  "\n";
  for (std::map<std::string, int>::iterator it = table.begin(); it != table.end(); it++){
    item += it->first;
    item +=  ": ";
    item +=  it->second;
    item +=  " oz\n";
  }
  item += "Price: $";
  item += this->price;
  item += "\n";
  
  return item;
}
