#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	char a[50];
	while(cin >> a && (strcmp(a,"#")!=0)) {
		if(next_permutation(a,a+strlen(a))) cout << a << endl;
		else cout << "No Successor" << endl;
	}

	return 0;
}
