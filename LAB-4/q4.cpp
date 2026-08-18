#include<iostream>
using namespace std;

class Song{
    string name;
    string aname;
    int d;
    public:
        Song(string sname,string anam,int du){
            name=sname;
            aname=anam;
            d=du;
        }
        friend void compareSong(Song d1,Song d2);
};

void compareSong(Song d1,Song d2){
    if(d1.d>d2.d){
        cout<<"Song Name:"<<d1.name<<endl;
        cout<<"Author Name:"<<d1.aname<<endl;
        cout<<"Duration:"<<d1.d<<endl;    
    }
    else if(d1.d==d2.d){
        cout<<"Both song are of same duration"<<endl;
    }
    else{
        cout<<"Song Name:"<<d2.name<<endl;
        cout<<"Author Name:"<<d2.aname<<endl;
        cout<<"Duration:"<<d2.d<<" mins"<<endl;  
    }
}

int main(){
    Song d1("Silhoutte","ABC",23);
    Song d2("S","AB",28);
    compareSong(d1,d2);
    return 0;
}