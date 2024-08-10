#include <iostream> 

using namespace std;

int main() {
  
int i, x, div = 0; 
      
 cout << "" ;
 cin >> x;
    
while (x <= 0);
  
for (i = 1; i <= x; i++) {
  if (x % i == 0) { 
     div++;
    }
  }
    
if (div == 2)
    cout << "PRIMO";
else
	cout << "!PRIMO";
}

