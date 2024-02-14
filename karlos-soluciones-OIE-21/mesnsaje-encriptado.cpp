#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string cesar_decrypt(const string &text, int rotation) {
  string decrypted_text = "";
  for (char c : text) {
    if (isalpha(c)) {
      char base;
      if (islower(c)) {
        base = 'a';
      } else {
        base = 'A';
      }
      decrypted_text += ((c - base - rotation + 26) % 26) + base;
    } else {
      decrypted_text += c;
    }
  }
  return decrypted_text;
}

int main() {
  int rotation;
  string commander_name, encrypted_text;

  cin >> rotation;
  cin >> commander_name;
  cin.ignore();
  getline(cin, encrypted_text);

  string decrypted_text = cesar_decrypt(encrypted_text, rotation);

  int contador = 0;
  size_t pos = decrypted_text.find(commander_name);
  while (pos != string::npos) {
    contador++;
    pos = decrypted_text.find(commander_name, pos + 1);
  }

  cout << contador << endl;

  return 0;
}
