#include <iostream>
#include <stirng>
#include "CustomItem.h"

CustomItem::CustomItem(std::string size){
  this->size = size;
}

CustomItem::~CustomItem(){

}

void CustomItem::addTopping(std::string topping){
  this->table[topping]++;
  this->price += 0.4;
}

double CustomItem::getPrice(){
  return this->price;
}

std::string CustomItem::composeItem(){

}
