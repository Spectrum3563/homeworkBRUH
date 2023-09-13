#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	char rollno[16];

	int age;

	char name[50];

	char address[50];
	
	gets(rollno);cin >> age;gets(name);gets(address);
	for(int i=0;i<16+10+50+50+5;i++){
		cout << "=";
	}
	cout << "\n";
	cout <<"|" << setw(16) <<"Ten" << "|"<<setw(10) <<"Tuoi"<<    "|"<<setw(50)<<"Ma SV"<<     "|" <<setw(50)<<"Dia chi"    <<    "|\n";
	for(int i=0;i<16+10+50+50+5;i++){
		cout << "=";
	}
	cout << "\n";
	cout << "|" <<setw(16)<< name << "|" <<setw(10)<< age << "|" <<setw(50)<< rollno << "|" << setw(50)<<address<<"|\n";
	for(int i=0;i<16+10+50+50+5;i++){
		cout << "=";
	}
	cout << "\n";return 0;
}
