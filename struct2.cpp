#include <iostream>
#include <string>
using namespace std;

struct player {
    string name; 
    string id;
    string level;
};


int main(){
    player pl;

    cout << "masukan nama player= " ;
    getline(cin,pl.name);
    cout << "masukan id= ";
    cin >> pl.id;
    cout << "masukan level= " ;
    cin  >> pl.level;

    cout << "tampilkan player" << endl;
    cout << "nama player=" << pl.name << endl;
    cout << "id player=" << pl.id << endl;
    cout << "level player=" << pl.level << endl;

}