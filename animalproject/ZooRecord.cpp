
#include "ZooRecord.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

ZooRecord::ZooRecord(){}
// ZooRecord::~ZooRecord(){
//   ZooRecord *d = new ZooRecord();
//   Animal *b = d;
//   delete b;
//   getchar();
//   clear();

// }

/**parameterized constructor
 @pre the input file is expected to be in CSV
 (comma separated value) format as:
 "animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
 backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
 @param input_file_name the name of the input file
 @post adds Animal objects to record as per the data in the input file
 **/

ZooRecord::ZooRecord(std::string input_file_name)
{
  std::ifstream zoodata; //strings in file get stored in zoodata
  zoodata.open(input_file_name);

  if (zoodata.fail()) {
      std::cerr << "File cannot be opened for reading." << std::endl;
      exit(1); // exit if failed to open the file
    }
  std::string junk;        // new string variable
  std::getline(zoodata, junk, '\n'); // skips first header line

std::string animal_name;
bool predator_status, domestic_status, venomous_status, hair_status, airborne_status, aquatic_status, toothed_status, fin_status, tail_status;
int leg_status;
  //beginning of while loop to get information from the file
  while (std::getline(zoodata, junk, '\n')) { //read header
    std::istringstream information(junk); //getting all the information from the file
    std::string animal_1, predator_1, domestestic_1, hairr, airbornee, aquaticc, toothedd, finss, taill, legss, venomouss, classtype;
    std::getline(information, animal_1, ','); //getting the animal names
    animal_name = animal_1;
//beginning of part 4 variables
//the ones you dont need, store to junk and the ones you do need store it to variables

//getline, store hair in that variable
    std::getline(information, hairr, ',');
    if (hairr == "1"){
      hair_status = true;
    } else {
      hair_status = false;
    }

    // store airborne in the variable
    for (int i = 0; i < 4; i++){
      std::getline(information, airbornee, ',');
    }
    if (airbornee == "1"){
      airborne_status = true;
    } else {
      airborne_status = false;
    }

    // store aquatic_status;
    std::getline(information, aquaticc, ',');
    if (aquaticc == "1"){
      aquatic_status = true;
    }
    if (aquaticc == "0") {
      aquatic_status = false;
    }

    //declare predator boolean variable and changes the bool value based on the string
    // store predator_1;
    std::getline(information, predator_1, ',');
    if (predator_1 == "1"){
      predator_status = true;
    } else {
      predator_status = false;
    }

    // store toothed_status;
    std::getline(information, toothedd, ',');
    if (toothedd == "1"){
      toothed_status = true;
    } else {
      toothed_status = false;
    }

    // store venomous_status;
    for (int i = 0; i < 3; i++){
      std::getline(information, venomouss, ',');
    }
    if (venomouss == "1"){
      venomous_status = true;
    } else {
      venomous_status = false;
    }

    // store fin_status;
    std::getline(information, finss, ',');
    if (finss == "1"){
      fin_status = true;
    } else {
      fin_status = false;
    }

    //store integer legs
    std::getline(information, legss, ',');
    leg_status = std::stoi(legss);

    // store tail_status;
    std::getline(information, taill, ',');
    if (taill == "1"){
      tail_status = true;
    } else {
      tail_status = false;
    }


//end of part 4 variables



//declare domestic boolean variable and changes the bool value based on the string
    // bool domestic_status;
    // store domestestic_1;
    std::getline(information, domestestic_1, ',');
    if (domestestic_1 == "1"){
      domestic_status = 1;
    } else {
      domestic_status = 0;
    }

// instantiates animal and creates either mammal, bird, or fish
  for (int i = 0; i < 2; i++){
    std::getline(information, classtype, ',');
  }
  if (classtype[0] == '1'){ //calling first index of a string as char for LATE BINDING
    Mammal *add_mammal = new Mammal(animal_name, domestic_status, predator_status); //make pointer and set it to a new mammal object
    if (hair_status){
      add_mammal->setHair();
    }
    if (airborne_status){
      add_mammal->setAirborne();
    }
    if (aquatic_status){
      add_mammal->setAquatic();
    }
    if (toothed_status){
      add_mammal->setToothed();
    }
    if (fin_status){
      add_mammal->setFins();
    }
    if (tail_status){
      add_mammal->setTail();
    }

    add_mammal->setLegs(leg_status);
    Animal *animal = add_mammal; //set pointer to the object created
    insert(item_count_, animal); //insert object stored at the address at the end

  } if (classtype[0] == '2'){
    Bird *add_bird = new Bird(animal_name, domestic_status, predator_status);
    if (airborne_status){
      add_bird->setAirborne();
    }
    if (aquatic_status){
      add_bird->setAquatic();
    }
    Animal *animal = add_bird;
    insert(item_count_, animal);
  }
  if (classtype[0] == '4'){
    Fish *add_fish = new Fish(animal_name, domestic_status, predator_status);
    if (venomous_status){
      add_fish->setVenomous();
    }
    Animal *animal = add_fish;
    insert(item_count_, animal);
  }

}
zoodata.close();
}

//inherits display from animal
void ZooRecord::display(){
  // make a node and set it equal to the first. call display from first object. override w next pointer to next object
  for (int i = 0; i < item_count_; i++){
    getItem(i) -> display();
  }

}
