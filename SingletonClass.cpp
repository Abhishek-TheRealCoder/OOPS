#include<bits/stdc++.h>
using namespace std;

class Singleton{
    public:

    static Singleton* getInstance(){
        if(instance == NULL){
            instance = new Singleton();
        }
        cout<<"Instance Address: " << instance <<endl;
        return instance;
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
    Singleton*s1 = Singleton::getInstance();
    Singleton*s2 = Singleton::getInstance();
    cout<<s1<<endl;
    cout<<s2<<endl;
}