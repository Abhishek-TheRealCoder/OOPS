// Ecapsulation using smart pointer
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
    shared_ptr<Teacher> ptr = make_shared<Teacher>();// Creates a smart pointer ptr that points to a new Teacher object on the heap.
    cout<<ptr<<endl; // Prints the memory address that ptr is pointing to Heap.

    ptr->name = "Vedant"; // Sets the name property of the Teacher object to "Abhishek".
    string myname = ptr->name; // Copies the name property into a string variable myname.
    cout<<myname<<endl; 

    ptr->age = 26;
    ptr->dept = "Computer Science"; 
    ptr->subject = "C++"; 
    // Throw Error as it is declared as private
    // ptr->salary = 90000;
    ptr->setter(92000); // setter helps set private variable
    ptr->getter();  // getter helps get the private variable
    ptr->TeacherInfo();
    return 0;
}


// Stack Memory:                        Heap Memory:
// +---------------------+              +---------------------------------------------+
// | ptr (shared_ptr)    | ---------->  | Teacher object                             |
// +---------------------+              |---------------------------------------------|
//                                      | name    = "Vedant"                         |
//                                      | age     = 26                               |
//                                      | dept    = "Computer Science"               |
//                                      | subject = "C++"                            |
//                                      | salary  = 92000                            |
//                                      +---------------------------------------------+