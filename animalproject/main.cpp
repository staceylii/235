#include <iostream>
#include <string>
#include "Animal.hpp"
#include "List.hpp"
#include "ZooRecord.hpp"
#include "Node.hpp"
#include "PrecondViolatedExcep.hpp"
#include "Mammal.hpp"
#include "Fish.hpp"
#include "Bird.hpp"
/*
int main(){
  Animal bear("Winnie the pooh", true, true);
  std::cout << "Testing" << bear.getName() << std::endl;
  Mammal dolphin ("stacey", true, true);
  std::cout << "Testing" << dolphin.getName() << std::endl;
  return 0;
}
//you were compiling animal.cpp instead of compiling the main file
*/

int main(){

  ZooRecord dat("zoo.csv");
  dat.display();
  // Mammal dog("Jack", true, true);
  // dog.setAquatic();
  // dog.display();
  return 0;




}

aardvark is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, no tail and 4 legs.
antelope is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
bass is not domestic, it is a predator,
and it is not venomous.
bear is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, no tail and 4 legs.
boar is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
buffalo is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
calf is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
carp is domestic, is not a predator,
and it is not venomous.
catfish is not domestic, it is a predator,
and it is not venomous.
cavy is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, no tail and 4 legs.
cheetah is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
chicken is domestic and is not a predator,
it is airborne and it is not aquatic.
chub is not domestic, it is a predator,
and it is not venomous.
crow is not domestic and it is a predator,
it is airborne and it is not aquatic.
deer is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
dogfish is not domestic, it is a predator,
and it is not venomous.
dolphin is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has no hair, teeth, fins, tail and 0 legs.
dove is domestic and is not a predator,
it is airborne and it is not aquatic.
duck is not domestic and is not a predator,
it is airborne and it is aquatic.
elephant is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
flamingo is not domestic and is not a predator,
it is airborne and it is not aquatic.
fruitbat is not domestic and is not a predator,
it is airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 2 legs.
giraffe is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
girl is domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, no tail and 2 legs.
goat is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
gorilla is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, no tail and 2 legs.
gull is not domestic and it is a predator,
it is airborne and it is aquatic.
haddock is not domestic, is not a predator,
and it is not venomous.
hamster is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
hare is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
hawk is not domestic and it is a predator,
it is airborne and it is not aquatic.
herring is not domestic, it is a predator,
and it is not venomous.
kiwi is not domestic and it is a predator,
it is not airborne and it is not aquatic.
lark is not domestic and is not a predator,
it is airborne and it is not aquatic.
leopard is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
lion is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
lynx is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
mink is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has hair, teeth, no fins, tail and 4 legs.
mole is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
mongoose is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
opossum is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
oryx is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
ostrich is not domestic and is not a predator,
it is not airborne and it is not aquatic.
parakeet is domestic and is not a predator,
it is airborne and it is not aquatic.
penguin is not domestic and it is a predator,
it is not airborne and it is aquatic.
pheasant is not domestic and is not a predator,
it is airborne and it is not aquatic.
pike is not domestic, it is a predator,
and it is not venomous.
piranha is not domestic, it is a predator,
and it is not venomous.
platypus is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has hair, no teeth, no fins, tail and 4 legs.
polecat is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
pony is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
porpoise is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has no hair, teeth, fins, tail and 0 legs.
puma is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
pussycat is domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
raccoon is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
reindeer is domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
rhea is not domestic and it is a predator,
it is not airborne and it is not aquatic.
seahorse is not domestic, is not a predator,
and it is not venomous.
seal is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has hair, teeth, fins, no tail and 0 legs.
sealion is not domestic and it is a predator,
it is not airborne and it is aquatic,
it has hair, teeth, fins, tail and 2 legs.
skimmer is not domestic and it is a predator,
it is airborne and it is aquatic.
skua is not domestic and it is a predator,
it is airborne and it is aquatic.
sole is not domestic, is not a predator,
and it is not venomous.
sparrow is not domestic and is not a predator,
it is airborne and it is not aquatic.
squirrel is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 2 legs.
stingray is not domestic, it is a predator,
and it is venomous.
swan is not domestic and is not a predator,
it is airborne and it is aquatic.
tuna is not domestic, it is a predator,
and it is not venomous.
vampire is not domestic and is not a predator,
it is airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 2 legs.
vole is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
vulture is not domestic and it is a predator,
it is airborne and it is not aquatic.
wallaby is not domestic and is not a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 2 legs.
wolf is not domestic and it is a predator,
it is not airborne and it is not aquatic,
it has hair, teeth, no fins, tail and 4 legs.
wren is not domestic and is not a predator,
it is airborne and it is not aquatic.
