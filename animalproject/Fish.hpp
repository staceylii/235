// Project 2
// Stacey Li
// Implementing a derived class "fish" function
// 09/12/2019

#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class Fish: public Animal{
  public:
    Fish();
    //inherits name, domestic, predator
    Fish(std::string name, bool domestic = false, bool predator = false);
    bool isVenomous() const;
    void setVenomous();
    virtual void display() const override;
  private :
    bool venomous_;
};
