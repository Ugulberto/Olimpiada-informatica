#include <bits/stdc++.h>
using namespace std;
struct pedido
{
    int prioridad;
    string id;
    int dia;
    char premium;
};

bool operator>(pedido a, pedido b)
{
    if (a.dia != b.dia)
    {
        return b.dia < a.dia;
    }
    else
    {
        return b.prioridad < a.prioridad;
    }
}

bool solve()
{
    int cosas;
    cin >> cosas;
    int dia = 1, entregados = 0;
    priority_queue<pedido, vector<pedido>, greater<pedido>> pq;
    while (cosas--)
    {
        int a, c;
        string b;
        char d;
        cin >> a >> b >> c >> d;
        if (d == 'P')
            a++;
        pedido p = {a, b, c, d};
        pq.push(p);
    }
    while (dia <= 30)
    {
        int paq = 0;
        if (pq.top().dia == dia) {
            cout << "#" << dia << "\n";
        }
        while (!pq.empty() && paq < 10 && pq.top().dia == dia)
        {
            pedido a = pq.top(); pq.pop();
            cout << a.id << "\n";
            paq++;
        }
        dia++;
        if (pq.empty()) {
            break;
        }
    }
    return false;
}

int main()
{
    while (solve());
    return 0;
}