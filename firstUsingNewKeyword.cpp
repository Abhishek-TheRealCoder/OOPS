//using new keyword to allocate memory 
// and delete keyword to deallocate memory
#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
    //properties or data members
    string name;
    int age;
    string dept;
    string subject;
    int salary;

    // methods
    void changeDept(string newDept){
        dept = newDept;
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
    Teacher*ptr = new Teacher(); // object created in heap memory
    ptr->name = "Vedant";
    ptr->age = 26;
    ptr->dept = "Computer Science";
    ptr->subject = "DSA";
    ptr->salary = 90000;
    ptr->TeacherInfo();
    delete ptr;
    return 0;
}


// +-------------------+         +---------------------+
// |  ptr (Abhishek)   | ----->  |   Teacher object    |
// |shared_ptr<Teacher>|         |   (on Heap)        |
// +-------------------+         +---------------------+ 
    // stack memory                  //Heap memory   
                           

                    //    |
                    //    |
                                              
// +-------------------+         +---------------------------------------------+
// |   ptr (Abhishek)  | ----->  |   Teacher object (on Heap)                  |
// | shared_ptr<Teacher>|        |---------------------------------------------|
// +-------------------+         | name    = "Vedant"                          |
//                               | age     = 26                                |
//                               | dept    = "Computer Science"                |
//                               | subject = "DBMS"                            |
//                               | salary  = 800000                            |
//                               +---------------------------------------------+