// Static Keyword->
// represents the property of a class which is common for all instances/objects.
// variables are assigned memory in static memory area not in heap.
// they are not associated with any object/instance of a class.

// Static function->
// can be called without creating the object of the class.
// can onl access static member variables.
// memory is not assigned in heap rather in static memory area.
// they are not associated with any object/instance of a class.



// inside a class,inside a static member function we can only access static member variable.
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    static string schoolName(){
        return school; // static member can return static member variable only or can access static member variable onlydd 
    }

    void showInfo(){
        cout<<"Name of student is : " << name << endl; // OK: can access non-static member variable 'a' in non-static member function
        cout<<"Age of student is : " << age << endl; // OK: can access static member variable 'b' in non-static member function
        cout<<"School name is : " << school << endl; // OK: can access static member variable 'b' in non-static member function
    }

    string name ; // non-static member variable
    static string school; // static member variable
    int age; // non-static member variable
};

string Student::school = "City Montessori School"; // definition of static member variable outside the class

int main(){
    Student s1 ;
    s1.name = "Abhishek";
    s1.age = 20;
    s1.showInfo();
    
    // access static member function using :: operator
    cout<<"School name using static member function: " << Student::schoolName() << endl; 
    return 0;
}