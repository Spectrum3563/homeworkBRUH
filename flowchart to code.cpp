//flowchart
#include<iostream>
#include<cmath>

using namespace std;

int a,b,c,d,e,f;

int main(){
	cin>>a>>b>>c>>d>>e>>f;
	int x=pow(a,6)+b*c*d+e*f;
	int y=pow(a,3)*pow(b,2)+a*b*d*e*f;
	cout << x << ", " << y;
}
