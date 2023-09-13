#include<iostream>
using namespace std;
int main(){
	cout << "Enter 2 real numbers a, b in order:";
	double a, b;cin >> a >> b;
	if(a!=0){
		cout << -b/a;return 0;
	}
	if(b==0){
		cout << "Inf";
	}else{
		cout << "No solution";
	}
	return 0;
}
