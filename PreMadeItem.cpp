//Jing Su, 6839039

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
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
	std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << this->getPrice();
  std::string item;
  item += "Pre-made Size: ";
  item +=  this->size;
  item += "\n";
  item += "Pre-made Item: ";
  item += this->name;
  item += "\n";
  item += "Price: $";
  item += stream.str();
  item += "\n";
  return item;
}

double PreMadeItem::getPrice(){
  return this->price;
}
