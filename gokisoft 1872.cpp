#include<iostream>
using namespace std;
int main(){
    int a1, a2, a3, a4, mx;
    cin >> a1 >> a2 >>a3 >>a4;
    if(a1>a2){
        a1=mx;
    }else{
        a2=mx;
    }
    if(a3>mx){
        mx=a3;
    }
    if(a4>mx){
        mx=a4;
    }
    cout << mx;return 0;
}
