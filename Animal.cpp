// Project 1
// Stacey Li
// Implementing a class function
// 09/05/2019

#include <iostream>
#include "Animal.hpp"
#include <string>

//implement default constructors. can also be done in hpp by setting to default
Animal::Animal(){
  name_ = "";
  domestic_ = false;
  predator_ = false;
}

//constructor if user passes in parameters
Animal::Animal(std::string name, bool domestic, bool predator){
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
}

//access animal's name
std::string Animal::getName() const{
  return name_;
}

//return if animal is domestic
bool Animal::isDomestic() const{
  return domestic_;
}

//return if animal is predator
bool Animal::isPredator() const{
  return predator_;
}

//modifier function to set animal name
void Animal::setName(std::string name){
  name_ = name;
}

//modifier function to set animal to domestic
void Animal::setDomestic(){
  domestic_ = true;
}

//modifier function to set animal to predator
void Animal::setPredator(){
  predator_ = true;
}
