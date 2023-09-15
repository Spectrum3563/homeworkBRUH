#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define nl cout << "\n"

bool checkprime(int n){
	if(n < 2){
		return false;
	}else if(n == 2){
		return true;
	}else{
		for(int i = 2 ; i <= sqrt(n) ; i ++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	cout << "Nhap so nguyen N: N = ";int n;cin >> n;
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
	if(checkprime(n)==true){
		cout << "\nN la so nguyen to";
	}else{
		cout << "\nN khong la so nguyen to";
	}
	cout << "\n";int a, b;
	cout << "\nNhap a va b: ";cin >> a >> b;int sum=0;
	if(a>b){
		n=a;a=b;b=n;
	}
	for(int i=a+1;i<b;i++){
		sum+=i;
	}
	cout << "\nTong cua cac so nam giua a va b la: " << sum;
	cout << "\n\nNhap vao so N: ";cin >> n;sum=0;
	cout << "\nCac so nguyen to tu 1 toi N la:";
	for(int o=2;o<=n;o++){
		if(checkprime(o)==true){
			cout << " " << o;
			sum+=o;
		}
	}
	nl;
	cout << "Tong cac so nguyen to tu 1 toi N la: " << sum << "\n";
	int t[10];int sum6=0;sum=0;
	int sum21=0;
	vector <int>k;
	nl;cout << "Nhap vao 10 so nguyen: ";
	for(int i=0;i<10;i++){
		cin >> t[i];
		sum+=t[i];
		if(t[i]%6==0){
			sum6+=t[i];
		}
		if(t[i]%21==0){
			sum21+=t[i];
		}
		if(checkprime(t[i])==true){
			k.push_back(t[i]);
		}
	}
	cout << "Tong cac phan tu trong mang: " << sum << "\nTong cac phan tu trong mang chia het cho 3 va 6: " << sum6;nl;
	cout << "Tong cac phan tu trong mang chia het cho 3 va 7: " << sum21;nl;
}
