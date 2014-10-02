#include <iostream>
#include <cstdio>
using namespace std;

int fat(int a) {
    int tot=1;
    while(a!=1) {
        tot *= a;
        a--;
    }
    return tot;
}

int main() {
    int n,m,b,x,y,k=1,fatx,faty,aux,tot,t1,t2;
    x=y=0;
    while(cin >> n >> m >> b) {
        tot = 0;
        aux = 1;
        x = n/5;

        while(n>0) {
            if(y!=0) k = (fat(x+y)/(fat(x) * fat(y)));

            for(int i=0; i<x; i++) aux *= m;
            if(y!=0) for(int i=0; i<y; i++) aux *= b;
            aux *= k;

            tot += aux;

            aux = 1;
            x = x-2;
            y = y+1;
            n = n-10;

            cout << t1 << " " << t2 << endl;
        }
        cout << tot << endl;
    }
    return 0;
}
