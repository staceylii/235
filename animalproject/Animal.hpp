// Project 1
// Stacey Li
// Implementing a class function
// 09/05/2019

#pragma once
// #ifndef ANIMAL_HPP_
// #define ANIMAL_HPP_
#include <string>
// #include "Animal.hpp"

//declare class
class Animal{
  public: //constructors, accessors, and mutators belong in public class
    Animal();
    Animal(std::string name, bool domestic = false, bool predator = false);
    std::string getName() const;
    bool isDomestic() const;
    bool isPredator() const;
    void setName(std::string name);
    void setDomestic();
    void setPredator();
    virtual void display() const = 0; //setting to 0 makes it a pure virtual and allows polymorphism
    bool operator==(const Animal &animal1) const; //add operator to compare

  protected: //private members belong in private class
    std::string name_;
    bool domestic_;
    bool predator_;
};

//#endif
