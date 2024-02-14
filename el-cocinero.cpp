#include <bits/stdc++.h>
using namespace std;

struct pedido {
    int t, d;
    int pos;
};

bool cmp(pedido a, pedido b) {
    //a > b si y solo si (a.t/a.d) > (b.t/b.d)
    if (a.t * b.d != a.d * b.t) return a.t * b.d < a.d * b.t;
    return a.pos < b.pos;
}

int main() {
    int n; cin >> n;
    vector<pedido> pedidos(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        pedido p;
        p.t = a;
        p.d = b;
        p.pos = i;
        pedidos[i] = p;
    }

    sort(pedidos.begin(), pedidos.end(), cmp);

    for (pedido &i : pedidos) {
        cout << i.pos+1 << "\n";
    }
    return 0;
}