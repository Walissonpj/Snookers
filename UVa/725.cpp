#include <bits/stdc++.h>
using namespace std;

int n,i,z,a,b,c,d,aux,e,f,g,h,ver,j,w,flag=0,cont=0;
void ans();

int main() {
		map<int, int> m;
		while(cin >> n) {
			if(n==0) return 0;
			if(cont>0) cout << '\n';
			cont++;

			ver = 0;
			for(i=1234; i<98765; i++) {
				m.clear();
				aux = i;
				j = aux/10000;
				aux = abs(j*10000 - aux);
				e = aux/1000;
				aux = abs(aux - e*1000);
				f = aux /100;
				aux = abs(aux - f*100);
				g = aux /10;
				aux = abs(aux - g*10);
				h = aux;
				
				m[j] ++;
				m[e] ++;
				m[f] ++;
				m[g] ++;
				m[h] ++;
					if(m[e] == 1 && m[f] == 1 && m[g] == 1 && m[h] == 1 && m[j] == 1) {
						z = n * i;
	 					if(z > 98765) break;
						aux = z;
						w = (z/10000);
						z = abs(w*10000 - z);
						a = (z/1000);
						z = abs(a*1000 - z);
						b = (z/100);
						z = abs(b*100 - z);
						c = (z/10);
						z = abs(c*10 - z);
						d = z;
						
						m[w] ++;
						m[a] ++;
						m[b] ++;
						m[c] ++;
						m[d] ++;

						if(m[0] == 1 && m[1] == 1 && m[2] == 1 && m[3] == 1 && m[4] == 1 && m[5] == 1 && m[6] == 1 && m[7] == 1 && m[8] == 1 && m[9] == 1) {
							ver = 1;
							ans();
						}
					}
			}
			if(!ver) cout << "There are no solutions for " << n << '.' << "\n";
		}	
		
	return 0;
}
			
void ans() {
	if(i>10000 && aux>10000)
		cout << aux << " / " << i << " = " << n <<'\n';
	if(i>10000 && aux<10000)
		cout << 0 << aux << " / " << i << " = " << n <<'\n';
	if(i<10000 && aux>10000)
		cout << aux << " / " << 0 << i << " = " << n <<'\n';
	if(i<10000 && aux<10000)
		cout << 0 << aux << " / " << 0 << i << " = " << n <<'\n'; 
}
