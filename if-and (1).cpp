#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
    int nilai;
    cout << " nilai kamu = ";
    cin >> nilai;
    if (nilai > 78) {
      cout << "Lulus";
    }
    else if (nilai == 78) {
          cout << "lulus kkm";
    }
    else {
          cout << "tidak lulus kkm";
    }
return 0;
}
