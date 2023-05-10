#include <iostream>

#include <string>

using namespace std;

//Base class

class Vehicle{

  public:

   string brand = "Ford";

   void honk(){

    cout << "Tuut..tuut" <<endl;

   }

};

//Derived class

class Car: public Vehicle{

  public:

   string model = "Mustang";

};

int main(){

  Car mycar;

  mycar.honk();

  cout << mycar.brand + " " + mycar.model <<endl;

  return 0;

}
