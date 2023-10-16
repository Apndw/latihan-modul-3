#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::tolower;

int main() {
  char character;

  cout << "Masukkan karakter: ";
  cin >> character;

  cout << "Karakter yang dimasukkan adalah " << character << endl;

  if (tolower(character) == 'a' || tolower(character) == 'i' ||
      tolower(character) == 'u' || tolower(character) == 'e' ||
      tolower(character) == 'o') {
    cout << "Karakter yang dimasukkan adalah huruf vokal" << endl;
  }

  return 0;
}