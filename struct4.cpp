#include <iostream>
#include <string>
using namespace std;

struct weapon {
    string name;
    int damage;
};

struct player {
    string name; 
    string id;
    string level;
    weapon weapone;
};



int main(){
    player pl[3];
    for(int i=0; i<3; i++){
        cout << "masukan nama player= " ;
        getline(cin,pl[i].name);
        cout << "masukan id= ";
        cin >> pl[i].id;
        cout << "masukan level= " ;
        cin >> pl[i].level;
        cin.ignore();
        cout << "masukan nama weapon=";
        getline(cin,pl[i].weapone.name);
        cout << "masukan demage=" ;
        cin >> pl[i].weapone.damage;
    }


    for(int i=0; i<3; i++){
        cout << "tampilkan player" << endl;
        cout << "nama player=" << pl[i].name << endl;
        cout << "id player=" << pl[i].id << endl;
        cout << "level player=" << pl[i].level << endl;
        cout << "nama weapone=" << pl[i].weapone.name << endl;
            cout << "damage weapone" << pl[i].weapone.damage << endl;
    }
   

}