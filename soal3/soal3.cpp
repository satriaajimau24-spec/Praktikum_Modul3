#include <iostream>
using namespace std;

const int N = 3;

// Menampilkan isi array integer 2D
void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Menukarkan isi dua array 2D pada posisi (baris, kolom) tertentu
void tukarArray(int a[N][N], int b[N][N], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

// Menukarkan isi variabel yang ditunjuk oleh 2 pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    int x = 100, y = 200;
    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    int baris, kolom;
    cout << "\nTukar posisi (baris kolom, 0-2): ";
    cin >> baris >> kolom;
    if (baris < 0 || baris >= N || kolom < 0 || kolom >= N) {
        cout << "Posisi tidak valid!" << endl;
        return 1;
    }
    tukarArray(A, B, baris, kolom);

    cout << "\nSetelah ditukar:" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    cout << "\nSebelum tukar pointer: x = " << *ptr1 << ", y = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer: x = " << *ptr1 << ", y = " << *ptr2 << endl;

    return 0;
}