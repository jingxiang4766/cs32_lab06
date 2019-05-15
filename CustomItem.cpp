//Jing Su, 6839039

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "CustomItem.h"

CustomItem::CustomItem(std::string size):IceCreamItem(size){
  this->size = size;
  if (size == "small") {this->price = 3;}
  else if (size == "medium"){ this->price = 5;}
  else {this->price = 6.5;}
}

CustomItem::~CustomItem(){
//
}

void CustomItem::addTopping(std::string topping){
  this->price += 0.4;
  this->table[topping]++;
}

double CustomItem::getPrice(){
  return  this->price;
}

std::string CustomItem::composeItem(){
  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << getPrice();
  std::string item;
  item += "Custom Size: ";
  item +=  this->size;
  item +=  "\n";
  item += "Toppings:";
  item +=  "\n";
  for (std::map<std::string, int>::iterator it = table.begin(); it != table.end(); it++){
    item += it->first;
    item +=  ": ";
    item += std::to_string(it->second);
    item +=  " oz\n";
  }
  item += "Price: $";
  item += stream.str();
  item += "\n";
  
  return item;
}
