/*
类继承中的构造 P103

直接看p105的示例程序即可
*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(int w, int r) : numWheels(w), range(r) {}
    void ShowV() {
        cout << " Wheels:" << numWheels << endl;
        cout << " Ranges:" << range << endl;
    }
    
private:
    int numWheels;
    int range;
};

class Car : public Vehicle {
public:
    Car(int p, int w, int r) : Vehicle(w, r), passengers(p) {}
    void Show() {
        cout << endl << "Car:" << endl;
        //Vehicle::ShowV();
        ShowV();
        cout << "Passengers:" << passengers << endl;
    }

private:
    int passengers;
};

class Truck : public Vehicle {
public:
    Truck(int l, int w, int r) : Vehicle(w, r), loadLimit(l) {}
    void Show() {
        cout << endl << "Truck" << endl;
        ShowV();
        cout << "load limit:" << loadLimit << endl;
    } 
private:
    int loadLimit;
};

int main(int argc, char const *argv[]) {
    Car c(5, 4, 500);
    Truck t(30000, 12, 1200);

    c.Show();
    t.Show();
    return 0;
}