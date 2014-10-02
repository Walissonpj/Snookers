#include <bits/stdc++.h>
using namespace std;

bool Comparation(const int a, const int b) {
	return a > b ;
}

int main() {
	int n,i,cont;
	cin >> n;

	while(n--) {
		int k;
		cont = 0;
		cin >> k;
		int v[k];
		
		for(i=0;i<k;i++)
			cin >> v[i];

		sort(v,v+k,Comparation);
		
		int flag = 1;
		for(i=0;i<k;i++) {
			if(flag) {
				cont += v[i];
				flag = 0;
			}else {
				flag = 1;
			}
		}
		cout << cont << "\n";
	}
	return 0;
}
