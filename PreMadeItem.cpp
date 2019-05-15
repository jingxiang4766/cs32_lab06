#include <iostream>
#include <string>
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size){
  this->name = name;
  if (size == "small") price = 4;
  else if (size == "medium") price = 6;
  else price = 7.5;
}

PreMadeItem::~PreMadeItem(){
//
}

std::string PreMadeItem::composeItem(){
  std::string item;
  item += "Pre-made Size: ";
  item +=  this->size;
  item += "\n";
  item += "Pre-made Item: ";
  item += this->name;
  item += "\n";
  item += "Price: $";
  item += this->price;
  item += "\n";
  return item;
}

double PreMadeItem::getPrice(){
  return this->price;
}
