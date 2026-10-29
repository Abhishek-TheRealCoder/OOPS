#include<bits/stdc++.h>
using namespace std;

class SportsCar                          
{
    private:
    string brand;
    string model;
    bool isEngineOn;
    int currSpeed;
    int currGear;
    
    public:
    SportsCar(string b,string m) : brand(b), model(m)
    {
        isEngineOn = false;
        currSpeed = 0;
        currGear = 0;
    } 

    void startEngine()
    {
        isEngineOn = true;
        cout << brand << " " << model << " " << ": Engine starts with a roar " << endl;
    }

    void shiftGear(int gear)
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot shift gear " << endl;
            return ;
        }

        currGear = gear;
        cout << brand << " " << model << " " << ": Engine is shifted to gear " << currGear << endl;
        return ;
    }

    void accelarate()
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot accelarate " << endl;
            return ;
        }
        currSpeed += 20;

        cout << brand << " " << model << " " << ": Accelarating to " << currSpeed << " km/ph " << endl;
        return ;
    }

    void brake()
    {
        if(!isEngineOn)
        {
            cout << brand << " " << model << " " << ": Engine is Off cannot use brakes " << endl;
            return ;
        }

        currSpeed -= 20;
        if(currSpeed < 0) currSpeed = 0;
        cout << brand << " " << model << " " << ": Breaking down " << endl;
        return ;
    }

    void stopEngine()
    {
        currSpeed = 0;
        isEngineOn = false;
        currGear = 0;
        cout <<  brand << " " << model << " " << " car is stopped " << endl;  
    }

    int getCurrSpeed()
    {
        return currSpeed;
    }

    void setCurrSpeed(int speed){
        currSpeed = speed;
    }
};


int main()
{
    SportsCar* car1 = new SportsCar("Ford" , "Mushtang"); 
    car1 -> startEngine();
    car1 -> shiftGear(1);
    car1 -> accelarate();
    car1 -> shiftGear(2);
    car1 -> accelarate();
    car1 -> brake();
    car1 -> stopEngine();
    
    car1->setCurrSpeed(100);
    cout<<"Speed of my car is " << car1->getCurrSpeed() << endl;

    delete car1;
    return 0;
}
