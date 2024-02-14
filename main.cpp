/*#include <bits/stdc++.h>
using namespace std;

struct pedido
{
    int prioridad;
    string id;
    int dia;
    char premium;
    int pos;
};

bool operator<(pedido a, pedido b)
{
    if (a.dia != b.dia)
    {
        return b.dia < a.dia;
    }
    else if (a.dia == b.dia && a.prioridad != b.prioridad)
    {
        return b.prioridad > a.prioridad;
    } else {
        return b.pos < a.pos;
    }
}

bool solve()
{
    int cosas;
    cin >> cosas;
    int pa = cosas;
    int dia = 1, entregados = 0;
    priority_queue<pedido> pq;
    while (cosas--)
    {
        int a, c;
        string b;
        char d;
        cin >> a >> b >> c >> d;
        if (d == 'P')
            a++;
        pedido p = {a, b, c, d, pa-cosas};
        pq.push(p);
    }
    while (dia <= 30 && !pq.empty())
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
        if (paq == 10) {
            while (!pq.empty() && pq.top().dia == dia){
                
                pedido a = pq.top(); pq.pop();
                a.dia++;
                a.prioridad++;
                pq.push(a);
            }
        }
        dia++;
    }
    return false;
}

int main()
{
    while (solve());
    return 0;
}*/