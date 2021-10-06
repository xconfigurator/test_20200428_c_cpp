/*
类的继承 P101

基类：Building，楼房层数、房间数、以及它的总平方英尺数。
派生类：Housing extends Building，卧室数、浴室数。
派生类：OfficeBuilding extends Housing，电话数、灭火器数。
*/
#include <iostream>
using namespace std;

class Building {
public:
    Building(int f, int r, double ft) {
        floors = f;
        rooms = r;
        footage = ft;
    }
    void Show() {
        cout << " floors:" <<  floors << endl;
        cout << " rooms:" << rooms << endl;
        cout << " total area:" << footage << endl;
    }
protected:
    int floors;
    int rooms;
    double footage;
};

class Housing : public Building {
public:
    Housing(int f, int r, double ft, int bd, int bth) : Building(f, r, ft) {
        bedrooms = bd;
        bathrooms = bth;
    }
    void Show() {
        cout << endl << "HOUSING:" << endl;
        Building::Show();// 调用父类的方法
        cout << " bedrooms:" << bedrooms << endl;
        cout << " bathrooms:" << bathrooms << endl;
    }
private:
    int bedrooms;
    int bathrooms;
};

class OfficeBuilding : public Building {
public:
    OfficeBuilding(int f, int r, double ft, int ph, int ex) : Building(f, r, ft) {
        phones = ph;
        extinguishers = ex;
    }
    void Show() {
        cout << endl << "OFFICEBUILDING:" << endl;
        Building::Show();
        cout << " phones:" << phones << endl;
        cout << " extinguishers:" << extinguishers << endl;
    }
private:
    int phones;
    int extinguishers;// 灭火器
};

int main(int argc, char const *argv[]) {
    Housing hob(5, 7, 140, 2, 2);
    OfficeBuilding oob(8, 12, 500, 12, 2);

    hob.Show();
    oob.Show();
    return 0;
}