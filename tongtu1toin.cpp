#include<iostream>
#include<cmath>
#define ll long long int
#define ld long double
using namespace std;
ll sumn(ll n){
	if(n<0){
		return -n*(n-1)/2+1;
	}
	return n*(n+1)/2;
}

signed main(){
	int n;cin >> n;cout << sumn(n);
}
