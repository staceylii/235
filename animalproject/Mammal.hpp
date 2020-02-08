// Project 2
// Stacey Li
// Implementing a derived class "Mammal" function
// 09/12/2019

#pragma once
#include <iostream>
#include "Animal.hpp"
#include <string>

class Mammal: public Animal {
  public:
    Mammal();
    //inherits name, domestic, predator
    Mammal(std::string name, bool domestic = false, bool predator = false);
    bool hasHair() const;
    bool isAirborne() const;
    bool isAquatic() const;
    bool isToothed() const;
    bool hasFins() const;
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne();
    void setAquatic();
    void setToothed();
    void setFins();
    void setTail();
    void setLegs(int legs);
    virtual void display() const override;
  private:
    bool hair_;
    bool airborne_;
    bool aquatic_;
    bool toothed_;
    bool fins_;
    bool tail_;
    int legs_;

};
