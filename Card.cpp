#include <iostream>
#include <cstring>
#include "Card.h"

using namespace std;

Card::Card(char* newName){
  name = new char[strlen(newName}+1];
  strcpy(name, newName);
}

char* Card::getName(){
  return name;
}

int Card::getType(){
  return type;
}

void Card::setName(){
  
}
