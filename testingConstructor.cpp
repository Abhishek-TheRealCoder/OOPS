#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
    string name;
    int age;
    string dept;
    string subject;
    int salary;

    // Constructor to initialize the properties of the Teacher class 
    Teacher(string tName, int tAge, string tDept, string tSubject, int tSalary) :
        name(tName), age(tAge), dept(tDept), subject(tSubject), salary(tSalary)
    {
        cout<<"called constructor"<<endl;
    }

    Teacher(){
        cout<<"this is default constructor"<<endl;
    }
    
};

class Student{
    public:
    string name;
    int age;
    string dept;
    string subject;
    int rollNo;

    // Constructor to initialize the properties of the Student class 
    Student(string sName, int sAge, string sDept, string sSubject, int sRollNo) :
        name(sName), age(sAge), dept(sDept), subject(sSubject), rollNo(sRollNo)
    {
        cout<<"called constructor"<<endl;
    }

    Student(){
        cout<<"this is default constructor"<<endl;
    }

    struct Address{
        string city;
        string state;
        int pincode;

        Address(string aCity, string aState, int aPincode) :
            city(aCity), state(aState), pincode(aPincode)
        {
            cout<<"called constructor of address"<<endl;
        }

        Address(){
            cout<<"this is default constructor of address"<<endl;
        }
    };
    
};

int main(){
    typedef shared_ptr<Teacher> Abhishek;
    Abhishek ptr = make_shared<Teacher>();
    cout<<"name : "<<ptr->name<<endl;
    cout<<"age : "<<ptr->age<<endl; 
    cout<<"dept : "<<ptr->dept<<endl;
    cout<<"subject : "<<ptr->subject<<endl;
    cout<<"salary : "<<ptr->salary<<endl;
    cout<<endl;

    shared_ptr<Student::Address> sPtr = make_shared<Student::Address>("Mumbai", "Maharashtra", 400001);
    cout<<"city : "<<sPtr->city<<endl;
    cout<<"state : "<<sPtr->state<<endl;
    cout<<"pincode : "<<sPtr->pincode<<endl;


    return 0;
}