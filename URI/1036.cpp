#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c,x1,x2;
	cin >> a >> b >> c;

	double delta;

	delta = pow(b,2) - (4 * a * c);
	cout << "* " << delta << "\n"; 
	x1 = sqrt(delta);
	x2 = -sqrt(delta);

	printf("R1 = %.5f \n",((-b + x1)/(2*a)));
	printf("R2 = %.5f \n",((-b + x2)/(2*a)));
	return 0;
}
