#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

  string cadena;
  getline(cin, cadena);

  stringstream ss(cadena);
  string num_str;

  int actual_num = 0;
  int res = 0;
  bool first = true;

  while (getline(ss, num_str, ',')) {
    int numero;
    stringstream(num_str) >> numero;
    if (first) {
      first = false;
    } else if (numero > actual_num) {
      res++;
    }
    actual_num = numero;
  }

  cout << res << endl;

  return 0;
}