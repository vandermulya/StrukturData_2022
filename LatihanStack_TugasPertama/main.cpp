/*
NAMA    : VANDER MULYA PUTRA
NIM     : A11.2021.13343
KELP.   : A11.43UG1
DOSEN   : FERI AGUSTINA M.Kom
TITLE   : TUGAS PERTAMA STRUKTUR DATA - PROGRAM STACK (TUMPUKAN)
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 10 // YOU CAN ADJUST THIS MAXIMUM DATA (OPTIONAL)

using namespace std;

struct paket {
    char jenis_brg[30];
    int berat;
    char kota[30];
};

int top=-1;
struct paket kirim[MAX];

// ALL FUNCTIONS & PROCEDURES
void push(){
    if(top == MAX-1){
        cout << "!!! Paket Sudah Penuh !!!" << endl;
        cout << endl;
    } else {
        top++;
        cout << "=== DATA BARANG KE-" << top + 1 << " ===" << endl;
        cout << "Masukkan jenis barang = "; cin >> kirim[top].jenis_brg;
        cout << "Masukkan berat barang = "; cin >> kirim[top].berat;
        cout << "Masukkan kota tujuan  = "; cin >> kirim[top].kota;
        cout << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "Data masih kosong." << endl;
    } else {
        cout << "ID Data terakhir yang akan dihapus = " << top + 1 << endl;
        kirim[top--];
    }
}

int bersihData() {
    return top = -1;
}

void cetakData() {
    if (top == -1) {
        cout << "Data masih kosong." << endl;
    } else {
        cout << "=== DATA PENGIRIMAN BARANG ===" << endl;
        cout << "No. \t Nama \t  Berat(kg) \t Tujuan" << endl;
    }
    for(int i = top; i >= 0; i--) {
        cout << i + 1 << ".  \t";
        cout << kirim[i].jenis_brg << " \t\t";
        cout << kirim[i].berat << " \t" ;
        cout << kirim[i].kota << " \t" ;
        cout << endl;
    }
    cout << "Press any key to continue..." << endl;
    getch();
    cout << endl;
}

// KAMUS
int pilih;
int idData = 0;

// ALGORITMA
int main() {
    do {
        cout << "==== MENU UTAMA ====" << endl;
        cout << "== 1. Tambah Data ==" << endl;
        cout << "== 2. Hapus  Data ==" << endl;
        cout << "== 3. Tampil Data ==" << endl;
        cout << "== 4. Clear Data ===" << endl;
        cout << "==== 5. Keluar  ====" << endl;
        cout << "Pilihan Anda [1-5] : "; cin >> pilih;
        cout << endl;

        if(pilih == 1) {
            push();
            idData++;
        } else if(pilih == 2) {
            pop();
            idData--;
        } else if(pilih == 3) {
            cetakData();
        } else if(pilih == 4) {
            bersihData();
        }
    } while(pilih != 5);
    return 0;
}
