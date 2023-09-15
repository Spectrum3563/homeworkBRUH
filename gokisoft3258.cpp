#include <iostream>
#include <cmath>

using namespace std;

bool checkprime(int n){
	if(n < 2){
		return false;
	}else if(n == 2){
		return true;
	}else{
		for(int i = 2 ; i <= sqrt(n) ; i ++){
			if(!n%i){
				return false;
			}
		}
		return true;
	}
}

int main(){
	cout << "Nhap so nguyen N: N = ";
	int n;cin >> n;
	if(n%2 == 0){
		cout << "\nN chan";
	}else{
		cout << "\nN le";
	}
	if(n%2 == 0 && n%7 == 0){
		cout << "\nN chia het cho ca 2 va 7";
	}else{
		cout << "\nN khong chia het cho ca 2 va 7";
	}
	if(checkprime(n)){
		cout << "\nN la so nguyen to";
	}else{
		cout << "\nN khong la so nguyen to";
	}
	int a, b;
	cout << "\nNhap a va b: ";cin >> a >> b;
	int sum=0;
	if(a>b){
		n=a;a=b;b=n;
	}
	for(int i=a+1;i<b;i++){
		sum+=i;
	}
	cout << "\nTong cua cac so nam giua a va b la: " << sum;
}
