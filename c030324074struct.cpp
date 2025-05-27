#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){

    mahasiswa* hikmal = new mahasiswa;

    hikmal->nim = "c030324074";
    hikmal->nama = "M. Hikmal";
    hikmal->alamat = "Jl. Cempaka Raya Simp. Pinang Babaris";
    hikmal->ipk = 4;

    cout << hikmal->nim << "\n";
    cout << hikmal->nama << "\n";
    cout << hikmal->alamat << "\n";
    cout << hikmal->ipk << "\n";

    delete hikmal;

    return 0;
}