#include<bits/stdc++.h>
using namespace std;
// classes are nothing but user defined datatypes
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
    //typdef is an alias which says word Abhishek is nothing but this smart pointer of type Teacher(shared_ptr<datatype>)
    // means you can use Abhishek as a shortcut for shared_ptr<Teacher>.
    // So, instead of writing:
    // shared_ptr<Teacher> t = make_shared<Teacher>();
    // you can write:
    // Abhishek t = make_shared<Teacher>(); it just makes the code shorter and easier to read.
    typedef shared_ptr<Teacher> Abhishek;//shared_ptr - is a smart pointer that automatically deallocates memory that is no need of delete keyword
    // This creates a smart pointer ptr of type Abhishek (which is a shared_ptr<Teacher>) and points it to a new Teacher object on Heap.
    Abhishek ptr = make_shared<Teacher>();//make_shared - creates a new Teacher object on the heap.
    ptr->name = "Vedant";
    ptr->age = 26;                                
    ptr->dept = "Computer Science";
    ptr->subject = "DBMS";
    ptr->salary = 800000;
    ptr->TeacherInfo();
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