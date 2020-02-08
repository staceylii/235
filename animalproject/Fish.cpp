// Project 2
// Stacey Li
// Implementing a derived class "fish" function
// 09/12/2019

#include <iostream>
#include "Fish.hpp"
#include <string>

//inherits name, domestic, predator from Animal class
Fish::Fish(){
  name_ = "";
  domestic_ = false;
  predator_ = false;
  venomous_ = false;
}
/*
 Fish::Fish(std::string name, bool domestic, bool predator){
   Animal(name, domestic, predator);
   venomous_ = false;
 }
 */

 //parameterized constructor only ran in this syntax
Fish::Fish(std::string name, bool domestic, bool predator){
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
  venomous_ = false;
}

//accessor returns if fish is venomous
bool Fish::isVenomous() const{
  return venomous_;
 }

//mutator sets fish to venomous
void Fish::setVenomous(){
  venomous_ = true;
 }

//go through all the possibilities and print out the statements
 void Fish::display() const{
   std::string first = "";
   if (!domestic_ && !predator_){
     first = " is not domestic, is not a predator,";
   }else if (!domestic_ && predator_){
     first = " is not domestic, it is a predator,";
   } else if (domestic_ && !predator_){
     first = " is domestic, is not a predator,";
   }else {
     first = "is domestic, it is a predator,";
   }

   std::string venom = " ";

   if (!venomous_){
     venom = " not ";
   }
   std::cout << getName() << first << std::endl;
   std::cout << "and it is" << venom << "venomous" << ".\n\n";
 }
