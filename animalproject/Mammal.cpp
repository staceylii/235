// Project 2
// Stacey Li
// Implementing a derived class "Mammal" function
// 09/12/2019

#include <iostream>
#include <string>
#include "Mammal.hpp"

//inherits name, domestic, predator from Animal class

//parameterized constructor only ran in this syntax. will go to
Mammal::Mammal(std::string name, bool domestic, bool predator){
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
  hair_ = false;
  airborne_ = false;
  aquatic_ = false;
  toothed_ = false;
  fins_ = false;
  tail_ = false;
  legs_ = 0;
}

Mammal::Mammal(){
  name_ = "";
  domestic_ = false;
  predator_ = false;
  hair_ = false;
  airborne_ = false;
  aquatic_ = false;
  toothed_ = false;
  fins_ = false;
  tail_ = false;
  legs_ = 0;
}

//breturns if mammal has hair
bool Mammal::hasHair() const{
  return hair_;
}

//returns if mammal is airborne
bool Mammal::isAirborne() const{
  return airborne_;
}

//returns if mammal is aquatic
bool Mammal::isAquatic() const{
  return aquatic_;
}

//returns if mammal is toothed
bool Mammal::isToothed() const{
  return toothed_;
}

//acccessor returns if mammal has fins
bool Mammal::hasFins() const{
  return fins_;
}

//accessor returns if mammal has tail
bool Mammal::hasTail() const{
  return tail_;
}

//accessor returns if mammal has legs
int Mammal::legs() const{
  return legs_;
}

//mutator sets hair to true
void Mammal::setHair(){
  hair_ = true;
}

//mutator sets airborne to true
void Mammal::setAirborne(){
  airborne_ = true;
}

//mutator sets mammal to aquatic
void Mammal::setAquatic(){
  aquatic_ = true;
}

//mutator sets mammal to toothed
void Mammal::setToothed(){
  toothed_ = true;
}

//mutator sets mammal to finned
void Mammal::setFins(){
  fins_ = true;
}

//mutator sets mammal to tail
void Mammal::setTail(){
  tail_ = true;
}

//mutators sets number of legs in mammal
void Mammal::setLegs(int legs){
  legs_ = legs;
}

//go through all the possibilities and print out the statements
void Mammal::display() const {
  std::string first = "";
  if (!domestic_ && !predator_){
    first = " is not domestic and is not a predator,";
  }else if (!domestic_ && predator_){
    first = " is not domestic and it is a predator,";
  } else if (domestic_ && !predator_){
    first = " is domestic and is not a predator,";
  }else {
    first = " is domestic and it is a predator,";
  }
  std::string airb = " ";
  if (!airborne_){
    airb = " not ";
  }
  std::string aqua = " ";
  if (!aquatic_){
    aqua = " not ";
  }
  std::string hairy = " ";
  if (!hair_){
    hairy = " no ";
  }
  std::string teeth = " ";
  if (!toothed_){
    teeth = " no ";
  }
  std::string finned = " ";
  if (!fins_){
    finned = " no ";
  }
  std::string tailed = " ";
  if (!tail_){
    tailed = " no ";
  }

  std::cout << getName() << first << std::endl;
  std::cout << "it is" << airb << "airborne and it is" << aqua << "aquatic," << std::endl;
  std::cout << "it has" << hairy << "hair," << teeth << "teeth," << finned << "fins," << tailed << "tail and " << legs_ << " legs" << ".\n\n";
}
