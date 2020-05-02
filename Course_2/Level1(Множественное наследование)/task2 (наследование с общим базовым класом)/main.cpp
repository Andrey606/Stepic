/*
* Множественное наследование
*/
#include <iostream>

using namespace std;


struct Unit {
    Unit (int id, int hp): id_(id), hp_(hp){}

    virtual int id() const { return id_; }
    virtual int hp() const { return hp_; }

private:
    int id_;
    int hp_;
};

struct Elf:  Unit {
    Elf(int id, int hp): Unit (id, hp){}

    void elfMethod() { cout << "elfMethod!" << endl; }
};

struct Archer: Unit {
    Archer(int id, int hp): Unit (id, hp){}

    void archerMethod() { cout << "archerMethod!" << endl; }
};

struct ElfArcher: Elf, Archer {
    ElfArcher(int id, int hp): Elf (id+1, hp+1), Archer (id+1, hp+1){}

    int id() const { return Elf::id(); }
    int hp() const { return  Elf::hp(); }
};

Unit const * ElfBaseToArcherBase( Unit const * unit );

int main(int argc, const char * argv[]) {
    ElfArcher ElfArcherUnit(1, 10);

    cout << ElfArcherUnit.id() << endl;

    ElfArcherUnit.elfMethod();
    ElfArcherUnit.archerMethod();


    return 0;
}