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
    Student s("Abhishek",23,"Computer Science");
    s.name = "Vedant";
    s.age = 23;
    s.subject_stream = "ECE";
    s.info();
    return 0;
}