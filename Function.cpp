#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
#include <iostream>
#include <string>
using namespace std;

void halo(string nama){
  cout << "Halo, " << nama << endl; 
}
void tambah(int angka1,int angka2){
  printf("jumlah %d + %d = %d \n", angka1, angka2, angka1 + angka2);
}

void kurang(int a,int b){
  printf("jumlah %d - %d = %d \n", a, b, a - b);
}

void kali(int a,int b){
  printf("jumlah %d * %d = %d \n", a, b, a * b);
}

void bagi(int a,int b){
  printf("jumlah %d / %d = %d \n", a, b, a / b);
}

void keliling_persegi (int b){
  printf("jumlah 4 * %d = %d \n", b, 4 * b);
}

void luas_persegi (int s){
  printf("jumlah %d * %d = %d \n", s, s, s * s);
}

void volume_balok (int p,int l, int t ){
  
printf("jumlah %d * %d * %d = %d \n", p, l, t, p * l * t);
}

int main(){
  halo("tegar");
  halo("Hi");
  halo("haalo");
  tambah(2,3);
  tambah(4,5);
  kurang(2,3);
  kali(3,3);
  bagi(10,2);
  keliling_persegi(9);
  luas_persegi(8);
  volume_balok(3,4,5);
}