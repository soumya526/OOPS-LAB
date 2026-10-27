#include<iostream>
using namespace std;

class Character{
    public:
        int damage;
        virtual void attack()=0;
};

class Warrior: public Character{
    int strength=8;
    public:
        void attack() override{
            damage=20+2*strength;
        }

        void getdamage(){
            cout<<"Damage through Warrior Class is "<<damage<<endl;
        }
};

class Archer: public Character{
    int agility=7;
    public:
        void attack() override{
            damage=20+2*agility;
        }

        void getdamage(){
            cout<<"Damage through Archer Class is "<<damage<<endl;
        }
};

int main(){
    Warrior w;
    Archer a;
    w.attack();
    a.attack();
    w.getdamage();
    a.getdamage();
    return 0;
}