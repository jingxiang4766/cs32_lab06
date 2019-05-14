#include <iostream>
#include <string>
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size){
  this->name = name;
  this->size = size;
  if (size == "small") price = 4;
  else if (size == "medium") price = 6;
  else price = 7.5;
}

PreMadeItem::~PreMadeItem(){
//
}

std::string PreMadeItem::composeItem(){
  std::string item;
  item += "Pre-made Size: " + this->size + "\n";
  item += "Pre-made Item: " + this->name + "\n";
  item += "Price: $" + this->price;
}

double PreMadeItem::getPrice(){
  return this->price;
}
