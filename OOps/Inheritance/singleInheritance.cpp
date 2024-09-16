// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();  // Inherited method
//     d.bark(); // Own method
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Father {
// public:
//     void work() {
//         cout << "Father is working..." << endl;
//     }
// };

// class Mother {
// public:
//     void cook() {
//         cout << "Mother is cooking..." << endl;
//     }
// };

// class Child : public Father, public Mother {
// public:
//     void play() {
//         cout << "Child is playing..." << endl;
//     }
// };

// int main() {
//     Child c;
//     c.work(); // Inherited from Father
//     c.cook(); // Inherited from Mother
//     c.play(); // Own method
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// class Puppy : public Dog {
// public:
//     void weep() {
//         cout << "Weeping..." << endl;
//     }
// };

// int main() {
//     Puppy p;
//     p.eat();   // Inherited from Animal
//     p.bark();  // Inherited from Dog
//     p.weep();  // Own method
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void meow() {
//         cout << "Meowing..." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark(); // Own method

//     Cat c;
//     c.eat();  // Inherited from Animal
//     c.meow(); // Own method

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//     void move() {
//         cout << "Moving..." << endl;
//     }
// };

// class Car : public virtual Vehicle {
// public:
//     void drive() {
//         cout << "Driving..." << endl;
//     }
// };

// class Boat : public virtual Vehicle {
// public:
//     void sail() {
//         cout << "Sailing..." << endl;
//     }
// };

// class AmphibiousVehicle : public Car, public Boat {
// public:
//     void transform() {
//         cout << "Transforming..." << endl;
//     }
// };

// int main() {
//     AmphibiousVehicle av;
//     av.move();       // Ambiguity: both Car and Boat inherit from Vehicle
//     av.drive();      // Inherited from Car
//     av.sail();       // Inherited from Boat
//     av.transform();  // Own method

//     return 0;
// }