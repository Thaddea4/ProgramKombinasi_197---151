#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "============================" << endl;
    cout << " SIMULASI KEKUATAN PASSWORD " << endl;
    cout << "============================" << endl << endl;

    int k = 8; 

    double n1 = 26; 
    double hasil1 = pow(n1, k); 
    cout << "[1: HURUF KECIL SAJA]" << endl;
    cout << "- Contoh Password     : \"jogjaumy\"" << endl;
    cout << "- Jumlah Karakter (n) : " << n1 << " karakter" << endl;
    cout << "- Panjang Password (k): " << k << " karakter" << endl;
    cout << "- Total Kombinasi (N) : " << hasil1 << " kemungkinan" << endl;
    cout << "--------------------------------------------------" << endl << endl;

    double n2 = 62; 
    double hasil2 = pow(n2, k); 
    cout << "[2: HURUF DAN ANGKA]" << endl;
    cout << "- Contoh Password     : \"Bantul26\"" << endl;
    cout << "- Jumlah Karakter (n) : " << n2 << " karakter" << endl;
    cout << "- Panjang Password (k): " << k << " karakter" << endl;
    cout << "- Total Kombinasi (N) : " << hasil2 << " kemungkinan" << endl;
    cout << "--------------------------------------------------" << endl << endl;

    double n3 = 94; 
    double hasil3 = pow(n3, k); 
    cout << "[3: HURUF, ANGKA, DAN SIMBOL]" << endl;
    cout << "- Contoh Password     : \"@Umy2026\"" << endl;
    cout << "- Jumlah Karakter (n) : " << n3 << " karakter" << endl;
    cout << "- Panjang Password (k): " << k << " karakter" << endl;
    cout << "- Total Kombinasi (N) : " << hasil3 << " kemungkinan" << endl;
    cout << "==================================================" << endl;

    return 0;
}