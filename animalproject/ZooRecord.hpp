
#pragma once
#include <string>
#include <iostream>
#include "List.hpp"
#include "Animal.hpp"
#include "Bird.hpp"
#include "Fish.hpp"
#include "Mammal.hpp"
#include "PrecondViolatedExcep.hpp"


class ZooRecord: public List<Animal*>{ //put star bc its a pointer
public:
  ZooRecord();
  ZooRecord(std::string input_file_name);
  // ~ZooRecord();
  void display();

};
