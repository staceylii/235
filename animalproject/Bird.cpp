// Project 2
// Stacey Li
// Implementing a derived class "Bird" function
// 09/12/2019

#include <iostream>
#include "Bird.hpp" //remember to include the .hpp file, which also includes Animal.hpp
#include <string>

//inherits name, domestic, predator from Animal class
Bird::Bird(){
  name_ = "";
  domestic_ = false;
  predator_ = false;//call on the Animal default constructor function to inherit
  airborne_ = false;
  aquatic_ = false;
}
/*
Bird::Bird(std::string name, bool domestic, bool predator){
  Animal(name, domestic, predator);
  airborne_ = false;
  aquatic_ = false;
}
*/

//parameterized constructor only ran in this syntax
Bird::Bird(std::string name, bool domestic, bool predator){
 name_ = name;
 domestic_ = domestic;
 predator_ = predator;
 airborne_ = false;
 aquatic_ = false;
}

//accessor return if bird is airborne
bool Bird::isAirborne() const{
  return airborne_;
}

//accessor return if bird is aquatic
bool Bird::isAquatic() const{
  return aquatic_;
}

//mutator sets bird to airborne
void Bird::setAirborne(){
  airborne_ = true;
}

//mutator sets bird to aquatic
void Bird::setAquatic(){
  aquatic_ = true;
}
//go through all the possibilities and print out the statements
void Bird::display() const{
  std::string first = getName();
  std::string statement = "";
  if (!domestic_ && !predator_){
    first += " is not domestic and is not a predator,";
  }else if (!domestic_ && predator_){
    first += " is not domestic and it is a predator,";
  } else if (domestic_ && !predator_){
    first += " is domestic and is not a predator,";
  }else {
    first += "is domestic and it is a predator,";
  }
  if (!airborne_ && !aquatic_){
    statement = "it is not airborne and it is not aquatic";
  }else if (!airborne_ && aquatic_){
    statement = "it is not airborne and it is aquatic";
  } else if (airborne_ && !aquatic_){
    statement = "it is airborne and it is not aquatic";
  }else{
    statement = "it is airborne and it is aquatic";
  }
  std::cout << first << std::endl;
  std::cout << statement << ".\n\n";
}
