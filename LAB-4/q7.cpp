#include <iostream>
using namespace std;

class GameManager;  

class Player
{
private:
    string pname;
    int health;
    int score;
    int level;

public:
    Player(string pln,int h,int s,int l)
    {
        pname=pln;
        health=h;
        score=s;
        level=l;
    }

    friend class GeneralManager;
};

class GeneralManager
{
public:
    void display(Player d)
    {
        cout << "Player Name: " << d.pname<< endl;
        cout<<"Health: "<<d.health<<endl;
        cout<<"Score: "<<d.score<<endl;
        cout<<"Level: "<<d.level<<endl;
    }
    void isalive(Player d){
        if(d.health>0){
            cout<<"Player is Alive"<<endl;
        }
        else{
            cout<<"Player is not Alive"<<endl;
        }
    }
    void Level(Player d){
        cout<<"Level: "<<d.level<<endl;
        cout<<"Score: "<<d.score<<endl;
    }
};

int main()
{
    Player d("A",30,56,5);
    GeneralManager s;
    s.display(d);
    s.isalive(d);
    s.Level(d);
    return 0;
}