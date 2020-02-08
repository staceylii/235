// Project 2
// Stacey Li
// Implementing a derived class "bird" function
// 09/12/2019

#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class Bird: public Animal {
  public:
    Bird();
    //inherits name, domestic, predator
    Bird(std::string name, bool domestic = false, bool predator = false);
    bool isAirborne() const;
    bool isAquatic() const;
    void setAirborne();
    void setAquatic();
    virtual void display() const override;
  private:
    bool airborne_;
    bool aquatic_;
};
