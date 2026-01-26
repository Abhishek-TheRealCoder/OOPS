// inside a class,inside a static member function we can only access static member variable.
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    static string schoolName(){
        // cout<<"Value of a: " << a << endl; // Error: cannot access non-static member variable 'a' in static member function
        // cout<<"Value of b: " << b << endl; // OK: can access static member variable 'b' in static member function
        return school;
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
    
    
    cout<<"School name using static member function: " << Student::schoolName() << endl;
    return 0;
}