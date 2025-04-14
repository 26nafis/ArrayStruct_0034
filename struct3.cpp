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
    player pl;

    cout << "masukan nama player= " ;
    getline(cin,pl.name);
    cout << "masukan id= ";
    cin >> pl.id;
    cout << "masukan level= " ;
    cin >> pl.level;
    cin.ignore();
    cout << "masukan nama weapon=";
    getline(cin,pl.weapone.name);
    cout << "masukan demage=" ;
    cin >> pl.weapone.damage;

    cout << "tampilkan player" << endl;
    cout << "nama player=" << pl.name << endl;
    cout << "id player=" << pl.id << endl;
    cout << "level player=" << pl.level << endl;
    cout << "nama weapone=" << pl.weapone.name << endl;
    cout << "damage weapone" << pl.weapone.damage << endl;

}