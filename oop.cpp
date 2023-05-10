#include <iostream>

#include <string>

using namespace std;

class MyClass{

  public:

    MyClass(){

      cout << "Hello from a Constructor." <<endl;

    }

    string name;

    int rollno;

    void display(){

      cout << name <<endl;

      cout << rollno <<endl;

    }

    int speed(int maxSpeed);

};

int MyClass::speed(int maxSpeed){

   return maxSpeed;

}

int main(){

  MyClass myobj;

  myobj.name = "John Dep";

  myobj.rollno = 12;

  cout << myobj.name <<endl;

  cout << myobj.rollno <<endl;

  myobj.display();

  cout << myobj.speed(250) <<endl;

  return 0;

}

