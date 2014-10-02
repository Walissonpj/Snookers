#include <bits/stdc++.h>
using namespace std;
int best[1000010];

int main() {
	memset(best, 0x3f3f3f3f, sizeof(best));
	int n,i;
	cin >> n;
	
	while(n--) {
		queue<pair<int, int> > q;
		while(!q.empty()) q.pop();

		int a,b;
		cin >> a >> b;
		int v[a];

		for(i=0;i<a;i++) cin >> v[i];
		
		int maior = v[0];

		 for(i=0;i<a;i++)
			if(v[i]>maior && v[i]<=b)
				maior = v[i];
		
		int prof = b/maior;
		q.push(make_pair(((prof/2)+(prof/4)+(prof/8))*maior, ((prof/2) + (prof/4) + (prof/8))));
		
		pair<int, int> it, aux;
		while(!q.empty()) {
			it = q.front();
			q.pop();
			
			if(it.second > best[it.first]) continue;
			best[it.first] = it.second;

			if(it.first == b) {
				cout << it.second << "\n";
				break;
			}

			for(i=0;i<a;i++) {
				aux.first = it.first + v[i];
				aux.second = it.second + 1;
				q.push(aux);
			}
		}
	}

	return 0;
}
