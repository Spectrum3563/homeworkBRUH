#include<iostream>
#include<string>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	char rollno[16];

	int age;

	char name[50];

	char address[200];
	
	gets(rollno);cin >> age;gets(name);gets(address);
	cout << "=============================\n";
	cout << "| Ten           | Tuoi    | Ma SV     | Dia chi        |\n";
	cout << "=============================\n";
	cout << "|" << name << "|" << age << "|" << rollno << "|" << address<<"|";
	cout << "=============================\n";return 0;
}
