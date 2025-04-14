#include <iostream>
using namespace std;

// mendeklarasikkan array tanpa ukuran, wajib diberi nilai awal
int nilai []={1,2,3};

//mendeklarasikan array dengan ukuran dan diberinilai awal
string nama[5]={"ben" , "agus" , "fara" , "ama" , "akila"};

// mmendeklarasikan array dengan ukuran dan tanpa nilai awal
float score[5];

int main(){
    cout << "nama pada index 2 adalah " << nama[2] << endl;
    // memberi nilai pada elemen array dengan index
    nama[4]= "nafis";
    cout << "nama pada index 2 adalah " << nama[2] << endl;
    
    cout << "inputscore" << endl;
    cout << endl;

    // memberi nilai nilai array dengan looping for
    for(int i = 0; i<5; i++) {
        cout << "score ke-" << i+1 << " =";
        cin >> score[i];
    }
    cout << "tampilkan skor" << endl;
    cout << endl;

    // memberi nilai nilai array dengan looping for
    for(int i = 0; i<5; i++) {
        cout << "score ke-" << i+1 << " =" <<score[1] << endl;
        
    }

}

