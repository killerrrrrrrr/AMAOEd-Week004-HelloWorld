#include <string>
#include <iostream>
#include "Dog.h"

using namespace std;

int main () {

// LeggedMammal dog("Short", true, 4);
// dog.DisplayLeggedMammal();

Dog dog2("Short", true, 4, "Bully", "Small", true);

dog2.setBreed("Pitbul");
cout << "Breed: " << dog2.getBreed() << endl;

dog2.setSize("Big");
cout << "Size: " << dog2.getSize() << endl;

dog2.setIsRegistered(false);
cout << "IsRegistered: " << dog2.getIsRegistered() << endl;


return 0;

};
