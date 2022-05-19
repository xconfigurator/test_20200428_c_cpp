/*
继承中的多态 P122

看程序写输出
*/
#include <iostream>
using namespace std;

class Description {
public:
    Description(char* info) : information(info) {}
    virtual void Print() { cout << information << endl; }

protected:
    char* information;
};

class Sphere : public Description {
public:
    Sphere(char* info, float rad) : Description(info), radius(rad) {}
    void Print() {
        Description::Print();
        cout << "radius = " << radius << endl;
    }
private:
    float radius;
};

class Cube : public Description {
public:
    Cube(char* info, float edge) : Description(info), edgeLength(edge) {}
    void Print() {
        Description::Print();
        cout << "edge length = " << edgeLength << endl;
    }
private:
    float edgeLength;
};

Sphere smallBall("mini", 1.0), beachBall("plastic", 24.0), planetoid("moon", 24);
Cube crystal("carbon", 24), ice("party", 1.0), box("cardboad", 16.0);

Description* shapes[] = {&smallBall, &beachBall, &planetoid, &crystal, &ice, &box};

int main() {
    for (int i = 0; i < sizeof(shapes) / sizeof(shapes[0]); i++) {
        shapes[i]->Print();
    }
    return 0;
}