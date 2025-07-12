#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
        string subject_stream;
        
        //Default constructor
        Student(){
            cout<<"this is default constructor"<<endl;
        }   
        Student(string name,int age,string subject_stream){
            this->name = name;
            this->age = age;
            this->subject_stream = subject_stream;
        }

        void info(){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"subject_stream : "<<subject_stream<<endl;
        }
};
int main(){
    Student* ptr = new Student("Abhishek",23,"Computer-Science");
    ptr->info();
    delete ptr;
    return 0;
}

//      Stack Memory:                                Heap Memory:
// +---------------------+              +---------------------------------------------+
// | ptr (shared_ptr)    | ---------->  | Student object                             |
// +---------------------+              |---------------------------------------------|
//                                      | name           = "Abhishek Singh"          |
//                                      | age            = 23                        |
//                                      | subject_stream = "Computer Science"        |
//                                      +---------------------------------------------+