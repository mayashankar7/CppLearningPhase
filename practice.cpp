#include <iostream>
using namespace std;

class Car {
public:
    // Write your constructor and printCarInfo method here.
    int noOfGear;
    string color;
    Car(int noOfGear, string color){
            this->noOfGear= noOfGear;
            this->color= color;
    }
    void printCarInfo(){

    }
};


class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
public:
    int maxSpeed;

    RaceCar(int noOfGear, string color, int maxSpeed){
        this->maxSpeed= maxSpeed;
    }
    void printRaceCarInfo(){
        cout<<"noOfGear: "<<noOfGear<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
    }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}