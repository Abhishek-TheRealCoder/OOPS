#include<bits/stdc++.h>
using namespace std;

// Class Car is  an interface
// An interface is a class that specifies what operations an object must support, but doesn't specify how they are implemented.
// A class that contains only pure virtual functions (and usually a virtual destructor) is commonly used as an interface in C++.
class Car                                           // an abstract base class which can never be instantiated that is we cannot create object of such classes
{                                                   // even if single pure virtual function then it becomes abstract class.
    public:
    virtual void startEngine() = 0; // virtual keyword-> to declare function startEngine() , its definition should should be in its child/derived class of Car 
    virtual void shiftGear(int gear) = 0;
    virtual void accelarate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car() {}
};

class SportsCar : public Car                         // SportsCar class is derived from base class Car 
{
    public:
    string brand;
    string model;
    bool isEngineOn;
    int currSpeed;
    int currGear;
    
    SportsCar(string b,string m) : brand(b), model(m)
    {
        isEngineOn = false;
        currSpeed = 0;
        currGear = 0;
    } 

    void startEngine()
    {
        isEngineOn = true;
        cout << brand << " " << model << " " << ": Engine starts with a roar " << endl;
    }

    void shiftGear(int gear)
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot shift gear " << endl;
            return ;
        }

        currGear = gear;
        cout << brand << " " << model << " " << ": Engine is shifted to gear " << currGear << endl;
        return ;
    }

    void accelarate()
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot accelarate " << endl;
            return ;
        }
        currSpeed += 20;

        cout << brand << " " << model << " " << ": Accelarating to " << currSpeed << " km/ph " << endl;
        return ;
    }

    void brake()
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot use brakes " << endl;
            return ;
        }

        currSpeed -= 20;
        if(currSpeed < 0) currSpeed = 0;
        cout << brand << " " << model << " " << ": Breaking down " << endl;
        return ;
    }

    void stopEngine()
    {
        currSpeed = 0;
        isEngineOn = false;
        currGear = 0;
        cout <<  brand << " " << model << " " << " car is stopped " << endl;  
    }
};


        //         Heap
        // +-----------------------+
        // |   SportsCar object    |
        // |-----------------------|
        // | brand = "Ford"        |
        // | model = "Mustang"     |
        // | currSpeed             |
        // | currGear              |
        // | isEngineOn            |
        // +-----------------------+
        //           ^
        //           |
        //   Car* car1 (base pointer)


int main()
{
    Car* car1 = new SportsCar("Ford" , "Mushtang");   // upcasting
    car1 -> startEngine();
    car1 -> shiftGear(1);
    car1 -> accelarate();
    car1 -> shiftGear(2);
    car1 -> accelarate();
    car1 -> brake();
    car1 -> stopEngine();
    delete car1;
    return 0;
}

// upcasting ->
// Car* car1 → a pointer of the base class.
// new SportsCar(...) → creates an object of the derived class.
// The SportsCar* is implicitly converted to a Car*. This conversion is called upcasting.


// Note ->
// How does C++ know which function to call?
// Because the functions are declared virtual:
// When you write:
// car1->startEngine();
// C++ checks the actual object type (SportsCar), not the pointer type (Car*), and calls:
// SportsCar::startEngine()
// This decision happens at runtime using the virtual table (vtable).

// Without virtual
// If startEngine() were not virtual:
// Car* car1 = new SportsCar(...);
// car1->startEngine();
// C++ checks car1 has type Car*, so generate a call to Car::startEngine(). It doesn't inspect the object at runtime.
// Car::startEngine()
// because it uses the pointer type (Car*) at compile time. That's called static binding.

// With virtual, it uses the object type (SportsCar). That's dynamic binding (late binding).
// SportsCar::startEngine();



// | Interface                           | Abstract Class                                  |
// | ----------------------------------- | ----------------------------------------------- |
// | Usually only pure virtual functions | Can have both pure virtual and normal functions |
// | Defines **what** must be done       | Can define **what** and **how**                 |
// | No data members (by convention)     | Can have data members                           |
// | Used like a contract                | Used to share common code                       |


// | Static Binding          | Dynamic Binding                    |
// | ----------------------- | ---------------------------------- |
// | Compile time            | Runtime                            |
// | Non-virtual function    | Virtual function                   |
// | Faster                  | Slightly slower (uses vtable/vptr) |
// | No runtime polymorphism | Supports runtime polymorphism      |



// Note -> 
// what happens when we write Car* car1 = new SportsCar("Ford" , "Mushtang");   car1 pointer is of datatype Car class but it is storing address of
// object/instance of SportsCar. Now Since Car is abstract class with oure virtual function therefore we will point to SportsCar object

// car1 -> startEngine() sees SportsCar :: startEngine() that is C++ checks the actual object type (SportsCar), not the pointer type (Car*), and calls SportsCar::startEngine()
// This decision happens at runtime using the virtual table (vtable).


//                    car1 (Car*)

//                         |
//                         |
//                         v

// Heap
// SportsCar Object
// +-------------------------------------+
// | vptr ---------------------------+   |
// | brand = Ford                    |   |
// | model = Mustang                 |   |
// | speed = 0                       |   |
// | gear = 0                        |   |
// | engine = false                  |   |
// +---------------------------------+   |
//                                       |
//                                       |
//                                       |
//                                       v
//           SportsCar vtable
// +------------------------------------------------+
// | startEngine -------> SportsCar::startEngine()  |
// | shiftGear ---------> SportsCar::shiftGear()    |
// | accelerate --------> SportsCar::accelerate()   |
// | brake -------------> SportsCar::brake()        |
// | stopEngine --------> SportsCar::stopEngine()   |
// | destructor --------> SportsCar::~SportsCar()   |
// +------------------------------------------------+

// Functions live in the program's code section, not in the object.

