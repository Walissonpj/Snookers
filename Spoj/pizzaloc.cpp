#include <bits/stdc++.h>
using namespace std;

int r;

typedef struct REST {
	int pos;
	int x;
	int y;

	bool operator<(const REST& b) const { 
		return (this->pos) < (b.pos);
	}
}REST;

typedef struct HOUSE {
	int x;
	int y;
	int val;
}HOUSE;

bool distance(int x0, int y0, int x1, int y1) {
	double ans = sqrt(pow((x0-x1),2.0) + pow((y0-y1),2.0));
	return ans <= r;
}

int main() {
	int k,j,m;
	cin >> k >> r;

	cin >> m;
	vector<REST> res(m);
	int i=0;
	for(;i<m;i++) {
		res[i].pos = i;
		cin >> res[i].x;
		cin >> res[i].y;
	}

	int l;
	cin >> l;

	vector<HOUSE> block(l);
	for(i=0;i<l;i++) {
		cin >> block[i].x;
		cin >> block[i].y;
		cin >> block[i].val;
	}

	int passei[l],cont,maior=0,ver=0;
	do {
		memset(passei,0,sizeof(passei));

		cont=0;

		for(i=0;i<k;i++) {
			for(j=0;j<l;j++) {
				if(!passei[j]) {

					if(distance(res[i].x,res[i].y,block[j].x,block[j].y)) { 
						passei[j] =1 ;
						cont += block[j].val;
//						cout << " * " << i << j << "\n";
					}
					ver = 0;
				}
			}
//			cout << " ** " << res[i].x << " " << res[i].y << " " << cont <<"\n";
		}

		if(cont > maior)
			maior = cont;
	}while(next_permutation(res.begin(),res.end()));
	
	cout << maior << "\n";
	return 0;
}
