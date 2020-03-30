/*
MIT License

Copyright (c) 2020 Hafiz Ramadhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

    Nama : Hafiz Ramadhan
    NIM  : 191011402923
    Code : Program menghitung total jumlah huruf yang telah diketik
    Link : https://github.com/rmdhfz/total-string
*/

#include <iostream>
#include <algorithm> // count_if, islower, isupper, isspace

using namespace std;

int main(){
    cout << "------------------------------------------------------------" << endl;
    cout << "- Program menghitung total jumlah huruf yang telah diketik -" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Masukan kalimat : "; 
    /*-------------------------------------------------*/
    string teks;
    size_t low, up, angka, space, special; // size_t = unsigned int yang didefinisikan dalam header algorithm, digunakan untuk menampung data jumlah huruf berbagai kriteria
    if (getline(cin, teks)){ // getline -> mengekstrak string dari inputan user kemudian menyimpan string tersebut kedalam variabel teks
        /*-------------------------------------------------*/
        low = count_if(teks.begin(), teks.end(), ::islower); // menampung nilai jumlah huruf kecil
        up = count_if(teks.begin(), teks.end(), ::isupper); // menampung nilai jumlah huruf besar
        angka = count_if(teks.begin(), teks.end(), ::isdigit); // menampung nilai jumlah angka
        space = count_if(teks.begin(), teks.end(), ::isspace); // menampung nilai jumlah spasi
        special = count_if(teks.begin(), teks.end(), ::ispunct); // menampung nilai jumlah special character
        cout << "------------------------------------------------------------" << endl;
        cout << "Kalimat "<<teks<<", mempunyai : " << endl; 
        cout << "------------------------------------------------------------" << endl;
        cout << "1) Total huruf kecil\t\t\t: " << low << endl; // menampilkan nilai jumlah huruf kecil
        cout << "2) Total huruf besar\t\t\t: " << up << endl; // menampilkan nilai jumlah huruf besar
        cout << "3) Total angka pada teks\t\t: " << angka << endl; // menampilkan nilai jumlah angka
        cout << "4) Total spasi pada teks\t\t: " << space << endl;  // menampilkan nilai jumlah spasi
        cout << "5) Total special karakter pada teks\t: " << special << endl; // menampilkan nilai jumlah spesial karakter
    }
}