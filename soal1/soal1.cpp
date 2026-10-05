#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilaiAkhir;
};

// Nilai akhir = 0.3*uts + 0.4*uas + 0.3*tugas
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

int main() {
    Mahasiswa mhs[MAX];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : "; cin.ignore(); getline(cin, mhs[i].nama);
        cout << "NIM    : "; cin >> mhs[i].nim;
        cout << "UTS    : "; cin >> mhs[i].uts;
        cout << "UAS    : "; cin >> mhs[i].uas;
        cout << "Tugas  : "; cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << mhs[i].nama << " | " << mhs[i].nim
             << " | UTS: " << mhs[i].uts << " | UAS: " << mhs[i].uas
             << " | Tugas: " << mhs[i].tugas
             << " | Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}