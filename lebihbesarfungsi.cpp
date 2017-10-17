#include <iostream>
using namespace std;

int banding(int a, int b);

int main(){

int a,b;
cout << "masukkan nilai a: "; cin >> a;
cout << "masukkan nilai b: "; cin >> b;
cout << "hasilnya: " << banding (a,b) << endl;

return 0;

}

int banding(int a, int b){
if (a>b) 
{return a;}
else
{return b;}
}