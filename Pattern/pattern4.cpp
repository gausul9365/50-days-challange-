#include <iostream>

using namespace std;

int main() {
int n=10;
 for(int row =1; row<=n; row++){
  for (int col = 1; col <=row; col++)
  {
    cout << col;
  }
  cout<< endl;
 }
}

// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910