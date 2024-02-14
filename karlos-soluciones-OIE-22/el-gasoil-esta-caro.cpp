#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, G;
  int sol_cost = 0;
  while (cin >> N >> G) {
    int consumo = N / 100;
    int coste = (consumo * G) * 170;
    sol_cost += coste;
  };
  cout << sol_cost << endl;
  return 0;
}