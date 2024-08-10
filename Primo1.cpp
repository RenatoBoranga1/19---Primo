#include <iostream>
 
using namespace std;
 
int main() {

 int num, i, resultado = 0;
 
 cout << "" ;
 cin >> num;

 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 2)
    cout << "PRIMO";
 else
    cout << "!PRIMO";
 
 return 0;
}
