#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout << "Enter the numbers a, b, c in order:";
	double a, b, c;cin >> a >> b >> c;
	if(a==0){
		if(b!=0){
			cout << -c/b;return 0;
		}
		if(c==0){
			cout << "Inf";
		}else{
			cout << "No solution";
		}
		return 0;
	}else{
		double delta=b*b-4*a*c;
		if(delta<0){
			cout << "No solution";
		}else if(delta==0){
			cout << -b/(2*a);
		}else{
			cout << (-b+sqrt(delta))/(2*a) << " " << (-b-sqrt(delta))/(2*a);
		}
	}
	return 0;
}
