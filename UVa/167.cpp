#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int ver,n,m[8][8],max=0,v[8],cont=0,maior=0,tot=0;
	cin >> n;

	for (int z=0; z<n; z++) {
		maior=0;
		for(int i=0; i<8; i++)
			for(int j=0; j<8; j++)
				cin >> m[i][j];
	
		for (int i=0; i<8; i++) v[i] = i;
		do {
			ver = 1;tot=0;
	
			for (int i=0; i<8; i++)
				for(int j=i+1; j<8; j++)
					if(v[i]+(j-i) == v[j] || v[i]-(j-i) == v[j]) {
						ver = 0;
						break;
					}
			
			if(ver) {
				for(int i=0; i<8; i++) tot+= m[i][v[i]];			
				if(tot>maior) maior = tot;
			}
		}while(next_permutation(v,v+8));
			cout << setw(5);
			cout << maior << endl;
	}
	return 0;
}
