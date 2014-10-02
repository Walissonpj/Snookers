#include <iostream>
#include <algorithm>
using namespace std;

int ver = 0;

void backt(int *v, int i, int tot) {

	if (i==5)
		if(tot == 23) {
			ver=1;
			return;
		}
		else return;

	else {
		backt(v, i+1, tot+v[i]);
		backt(v, i+1, tot-v[i]);
		backt(v, i+1, tot*v[i]);
	}
}

int main() {
	int v[5],flag=0;
	while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4]) {
		if ((v[0]==0 && v[1]==0 && v[2]==0 && v[3]==0 && v[4]==0)) break;
		sort(v, v+5);
		ver = 0;
		do {
			backt(v, 1, v[0]);
			if(ver) break;
		}while(next_permutation(v, v+5));

		if(ver) cout<<"Possible\n";
		else cout<<"Impossible\n";
	}

	return 0;
}
