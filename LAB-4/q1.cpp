#include<iostream>
using namespace std;

class Diary{
    string name;
    int e;
    string l;
    public:
        Diary(string n,int entry,string last){
            name=n;
            e=entry;
            l=last;
        }
        friend void displayDiary(Diary d);
};

void displayDiary(Diary d){
    cout<<"Owner Name: "<<d.name<<endl;
    cout<<"No of Entries: "<<d.e<<endl;
    cout<<"Last Entry: "<<d.l<<endl;
}

int main(){
    Diary d("Soumyakanta",5,"Completed");
    displayDiary(d);
    return 0;
}