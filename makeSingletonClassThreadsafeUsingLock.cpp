// But this implementation is not thread safe.
// To make it thread safe we can use mutex lock.
// This implementation is now thread safe.
#include<bits/stdc++.h>
using namespace std;

class Singleton{
    public:
    static Singleton* getInstance(){
        if(instance == NULL){
            lock_guard<mutex> lock(mtx); // lock for thread safety
            if(instance == NULL) { // double-checked locking
                instance = new Singleton();
            }
        }
        cout<<"Instance Address: " << instance <<endl;
        return instance;
    }
    
    private:
    Singleton(){
        cout<<"This is Singleton class"<<endl;
        cout<<instance<<endl;
    }

    static Singleton* instance;
    static mutex mtx;
};

Singleton* Singleton::instance = NULL;
mutex Singleton::mtx;

int main(){
    Singleton*s1 = Singleton::getInstance();
    cout<<s1<<endl;
    return 0;
}   