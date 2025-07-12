// Encapsulation for new and delete dynamic allocation of memory
#include<bits/stdc++.h>
using namespace std;

class Teacher{
    private:
        double salary;

    public:
        string name;
        int age;
        string dept;
        string subject;
    
        void changeDept(string newDept){
            dept = newDept;
        }
        //getter
        void getter(){
            cout<<"The salary is "<<salary<<endl;
        }
        //setter
        void setter(double newSal){
            salary = newSal;
        }

        void TeacherInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"dept : "<<dept<<endl;
            cout<<"subject : "<<subject<<endl;
            cout<<"salary : "<<salary<<endl;
        }

};


int main(){
    Teacher* ptr = new Teacher();
    cout<<ptr<<endl; // Prints the memory address that ptr is pointing to on Heap.
    ptr->name = "Vedant"; // Sets the name property of the Teacher object to "Abhishek".
    string myname = ptr->name; // Copies the name property into a string variable myname.
    cout<<myname<<endl; 

    ptr->age = 25;
    ptr->dept = "Computer Science"; 
    ptr->subject = "C++"; 
    // Throw Error as it is declared as private
    // ptr->salary = 90000;
    ptr->setter(92000); // setter helps set private variable
    ptr->getter();  // getter helps get the private variable
    ptr->TeacherInfo();
    delete ptr;
    return 0;
}