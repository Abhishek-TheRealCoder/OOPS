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
    shared_ptr<Student>ptr = make_shared<Student>("Abhishek Singh",23,"Computer Science" );
    ptr->name = "Yashaswini";
    ptr->age = 23;
    ptr->subject_stream = "ECE";
    ptr->info();
}