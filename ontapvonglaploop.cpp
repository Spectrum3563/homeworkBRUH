#include<iostream>
#include<cmath>
using namespace std;
#define nl cout<<"\n";
int n, ans, temp;
void nsumm(int n){
	//n(n+1)/2
	ans=0;
	for(int i=1;i<=n;i++){
		ans+=i;
	}
	cout << ans;nl
}

void n2sum(int n){
	//n(n+1)(2n+1)/6
	ans=0;
	for(int i=1;i<=n;i++){
		ans+=(i*i);
	}
	cout << ans;nl
}

void frac(int n){
	double dn=0;
	for(int i=1;i<=n;i++){
		dn+=(double)1/i;
	}
	cout << dn;nl
}

void frac2n(int n){
	//1-1/(2^n)
	double dn=0;
	double frc=1/2;
	for(int i=1;i<=n;i++){
		dn+=1/pow(2, i);
	}
	cout << dn;nl
}

void fracodd(int n){
	double dn=0;
	for(int i=1;i<=2*n+1;i+=2){
		dn+=1/i;
	}
	cout << dn;nl
}

int main(){
	cin >> n;nsumm(n);n2sum(n);frac(n);frac2n(n);fracodd(n);
}
