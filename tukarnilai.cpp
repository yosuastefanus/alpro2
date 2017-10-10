
#include <iostream>
using namespace std;

int a,b,c, temp;
void input();
void proses();
void output();

int main(){

input();
proses();
output();

}

void input(){
cout << "masukkan bilangan 1: "; cin >> a;
cout << "masukkan bilangan 2: "; cin >> b;
cout << "masukkan bilangan 3: "; cin >> c;
}

void proses(){
temp = c;
c = b;
b = a;
a = temp;
}

void output(){
cout << "\nbilangan 1 sekarang menjadi: " << a;
cout << "\nbilangan 2 sekarang menjadi: " << b;
cout << "\nbilangan 3 sekarang menjadi: " << c;
}