#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Enter a1, b1, c1, a2, b1, c2 in order: ";
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double m = a1 * b2 - b1 * a2;
    double n = b2 * c1 - c2 * b1;
    double p = c2 * a1 - a2 * c1;
    if (m) 
        cout << fixed << setprecision(1) << double(n / m) +1e-5<< " " << double (p / m)+1e-5;
    else if(n == 0 || p == 0)
        cout << "Inf";
    else
        cout << "No solution";
} 
