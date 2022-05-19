/*
动物类系 P50
（liuyang:比较无聊 ，没有统计，貌似也没多态，看看就好。）

编写一个统计动物种类的程序。
Animal
Mammal extends Animal
Bird extends Animal
*/
#include <iostream>
#include <string.h>
using namespace std;

#define FALSE 0
#define TRUE 1

class Animal {
public:
    Animal(const char *s);
    const char* GetName() {
        return name;
    }
private:
    char name[30];  // The Animal's name
};

// 哺乳动物
class Mammal : public Animal {
public:
    Mammal(const char* s, int nc);
    int NumOffspring() { return offspring; }
private:
    int offspring; // number of offspring(子女 幼崽)
};

class Bird : public Animal {
public:
    Bird(const char* s, int ne, int nests);
    int GetEggs() { return eggs; }
    const char* BuildNest();
private:
    int eggs;       // Average number of eggs
    int nesting;    // True i builds nest
};

void ShowMammal(Mammal& m);
void ShowBird(Bird& b);

int main(int argc, char const *argv[]) {
    Mammal homoSapiens("Homo Sapiens", 1);// 人类
    Mammal golpher("Gohper", 9);// 产自北美的一种地鼠
    Mammal armadillo("Armadillo", 4);// 犰狳
    Mammal houseMouse("House Mouse", 12);

    Bird woodDuck("Wood Duck", 15, FALSE);// 林鸳鸯 美国木鸭
    Bird sandhillCrane("Sandhill Crane", 2, TRUE);// 秋沙鸭
    Bird loon("Loon", 3, TRUE);// 潜鸟

    cout << endl << "Mamals:" << endl;
    ShowMammal(homoSapiens);
    ShowMammal(golpher);
    ShowMammal(armadillo);
    ShowMammal(houseMouse);

    cout << endl << "Birds:" << endl;
    ShowBird(woodDuck);
    ShowBird(sandhillCrane);
    ShowBird(loon);

    return 0;
}

void ShowMammal(Mammal& m) {
    cout << "Name..........." << (m.GetName()) << endl;
    cout << "Avg offspring.." << (m.NumOffspring()) << endl;
}

void ShowBird(Bird& b) {
    cout << "Name..........." << (b.GetName())<< endl;
    cout << "Avg no.eggs...." << (b.GetEggs()) << endl;
    cout << "Builds a nest.." << (b.BuildNest()) << endl;
}

Animal::Animal(const char* s) {
    strncpy(name, s, 29);
}

Mammal::Mammal(const char* s, int nc) : Animal(s) {
    offspring = nc;
}

Bird::Bird(const char* s, int ne, int nests) : Animal(s) {
    eggs = ne;
    nesting = nests;
}

const char* Bird::BuildNest() {
    if (nesting) {
        return "True";
    } else {
        return "FALSE";
    }
}