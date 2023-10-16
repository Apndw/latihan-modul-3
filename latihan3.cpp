#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int pilihan;

  cout << "<< MENU MENGHITUNG BIAYA OPERASI >>" << endl;
  cout << "1. Hitung Biaya Operasi Mata" << endl;
  cout << "2. Hitung Biaya Operasi Jantung" << endl;
  cout << "Masukkan pilihan: ";
  cin >> pilihan;

  switch (pilihan) {
    case 1:
      cout << "JENIS PENYAKIT MATA" << endl;
      cout << "1. Katarak" << endl;
      cout << "2. Plus/Minus" << endl;
      cout << "3. Silinder" << endl;
      cout << "Masukkan pilihan: ";
      cin >> pilihan;

      switch (pilihan) {
        case 1:
          cout << "Biaya operasi katarak adalah Rp 7.500.000" << endl;
          break;
        case 2:
          cout << "Biaya operasi plus/minus adalah Rp 5.000.000" << endl;
          break;
        case 3:
          cout << "Biaya operasi silinder adalah Rp 4.000.000" << endl;
          break;
        default:
          break;
      }
      break;
    case 2:
      cout << "JENIS PENYAKIT JANTUNG" << endl;
      cout << "1. Jantung Koroner" << endl;
      cout << "2. Katup Jantung" << endl;
      cout << "3. Otot Jantung" << endl;
      cout << "Masukkan pilihan: ";
      cin >> pilihan;

      switch (pilihan) {
        case 1:
          cout << "Biaya operasi jantung koroner adalah Rp 500.000.000" << endl;
          break;
        case 2:
          cout << "Biaya operasi katup jantung adalah Rp 350.000.000" << endl;
          break;
        case 3:
          cout << "Biaya operasi otot jantung adalah Rp 450.000.000" << endl;
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }

  return 0;
}