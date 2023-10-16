#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  float pembilang, penyebut, hasil;

  cout << "Masukkan pembilang: ";
  cin >> pembilang;

  cout << "Masukkan penyebut: ";
  cin >> penyebut;

  if (penyebut == 0) {
    cout << "Penyebut tidak boleh 0" << endl;
  } else {
    hasil = pembilang / penyebut;
    cout << "Hasil pembagian adalah " << hasil << endl;
  }

  return 0;
}