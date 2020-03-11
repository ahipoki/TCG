#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <cstring>

using namespace std;

class Card{
  public:
   Card(char*);
   char* getName();
   int getType();
};
