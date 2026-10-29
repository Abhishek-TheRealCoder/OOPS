// Singleton class is used to restect the creation of multiple objects for a class.
// we can have only one instance (object) suppose s1 of the class.
// next time if we try to create the object s2 of the class then it will return the already created object s1.
// But this implementation is not thread safe.
// To make it thread safe we can use mutex lock.
#include<bits/stdc++.h>
using namespace std;

class Singleton{
    public:

    static Singleton& getInstance(){
        if(instance == NULL){
            instance = new Singleton();
        }
        cout<<"Instance Address: " << instance <<endl;
        return *instance;
    }
    
    private:
    Singleton(){
        cout<<"This is Singleton class"<<endl;
        cout<<instance<<endl;
    }

    static Singleton*instance;
};

Singleton* Singleton::instance = NULL;

int main(){
    Singleton*s1 = &(Singleton::getInstance());
    cout<<s1<<endl;
    return 0;
}