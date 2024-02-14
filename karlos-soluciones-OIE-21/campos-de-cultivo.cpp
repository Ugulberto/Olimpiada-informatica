#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> M;

  for (int n = 0; n < N; n++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int base = abs(x2 - x1);
    int altura = abs(y2 - y1);
    int area = (base *= base) + (altura *= altura);
    M[area]++;
  }

  for (auto it = M.begin(); it != M.end(); it++) {
    cout << it->second << " " << it->first << endl;
  }
  return 0;
}