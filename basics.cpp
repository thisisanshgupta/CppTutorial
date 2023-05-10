//to compile type:

//g++ -o basics basics.cpp

#include <iostream>

#include <string>

#include <cmath>

using namespace std;

void myFunction(){

  cout << "I just got executed!" <<endl;

}

void myCountry(string country = "Norway") {

  cout << country << "\n";

}

int multiply(int x,int y){

  return x*y;

}

int plusFunc(int x, int y) {

  return x + y;

}

double plusFunc(double x, double y) {

  return x + y;

}

struct car{

  string brand;

  string model;

  int year;

};

int main(){

  cout << "Hello,World!";

  cout << "Hello,World! \n";

  cout << "I am learning C++" << endl;

  //This is a single line comment

  /*

    This is a

    multiline comment.

  */

  int inum = 15;

  cout << inum << endl;

  double dnum = 5.99;//8 bytes

  cout << dnum << endl;

  float fnum = 3.14;//4 bytes

  cout << fnum << endl;

  char ch = 'a';

  cout << ch << endl;

  string str = "apple";

  cout << str << endl;

  bool boolean = true;

  cout << boolean << endl;

  int x = 12;

  int y = 4;

  int sum = x + y;

  cout << "Sum:" << sum << endl;

  const float PI = 3.14;

  cout << PI << endl;

  int z;

  cout << "Enter a number:" << endl;

  cin >> z;

  cout << "Your Number is:" << z << endl;

  string fname = "John";

  string lname = "Doe";

  string fullname = fname + " " + lname;

  string fullname2 = fname.append(lname);

  cout << fullname << endl;

  cout << fullname2 << endl;

  cout << fname.length() << endl;

  cout << fname.size() << endl;

  string name = "Apple";

  cout << name[2] << endl;

  name[0] = 'M';

  cout << name << endl;

  string fullName;

  cout << "Type your full name:" << endl;

  getline (cin, fullName);//for strings only

  cout << "Your name is: " << fullName << endl;

  cout << max(5,10) << endl;

  cout << min(10,12) << endl;

  cout << sqrt(64) << endl;

  cout << round(11.4) << endl;

  cout << log(2) << endl;

  int time = 22;

  if(time < 10){

    cout << "Good Morning." << endl;

  }else if(time < 20){

    cout << "Good Day." << endl;

  }else{

    cout << "Good Night." << endl;

  }

  string result = (time < 18) ? "Good day." : "Good evening.";

  cout << result << endl;

  int day = 4;

  switch (day) {

  case 1:

    cout << "Monday";

    break;

  case 2:

    cout << "Tuesday";

    break;

  case 3:

    cout << "Wednesday";

    break;

  case 4:

    cout << "Thursday";

    break;

  case 5:

    cout << "Friday";

    break;

  case 6:

    cout << "Saturday";

    break;

  case 7:

    cout << "Sunday";

    break;

  }

  for (int i = 0; i < 5; i++) {

  cout << i << "\n";

  }

  int i = 0;

  while (i < 5) {

    cout << i << "\n";

    i++;

  }

  int j = 0;

  do{

    cout << j << "\n";

    j++;

  }while (j < 5);

  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

  cout << cars[0] << endl;

  cout << sizeof(cars) << endl;//in bytes

  cout << (sizeof(cars)/sizeof(int)) << endl;//get total no of array elements

  string letters[2][4] = {

  { "A", "B", "C", "D" },

  { "E", "F", "G", "H" }

  };

  cout << letters[0][2] << endl;

  struct{

    int myNum;

    string myString;

  } myStructure;

  myStructure.myNum = 1;

  myStructure.myString = "Hello";

  cout << myStructure.myNum << endl;

  cout << myStructure.myString << endl;

  struct{

    string brand;

    string model;

    int year;

  } myCar1,myCar2;

  myCar1.brand = "BMW";

  myCar1.model = "X5";

  myCar1.year = 1999;

  myCar2.brand = "Ford";

  myCar2.model = "Mustang";

  myCar2.year = 1969;

  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";

  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  car myCar1;

  myCar1.brand = "BMW";

  myCar1.model = "X5";

  myCar1.year = 1999;

  car myCar2;

  myCar2.brand = "Ford";

  myCar2.model = "Mustang";

  myCar2.year = 1969;

  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";

  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  string food = "Pizza";

  string &meal = food;

  cout << food << endl;

  cout << meal << endl;

  cout << &food << endl;//outputs memory address of food variable

  string* ptr = &food;

  /*

  string* ptr; // Preferred

  string *ptr;

  string * ptr;

  */

  cout << ptr << endl;

  cout << *ptr << endl;//dereferrencing

  *ptr = "Hamburger";

  cout << *ptr << "\n";

  cout << food << "\n";

  myFunction();

  myCountry("India");

  myCountry("UK");

  myCountry();

  cout << multiply(5,6) << endl;

  int myNum1 = plusFunc(8, 5);

  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";

  cout << "Double: " << myNum2 << "\n";

  return 0;

}

