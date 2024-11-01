#include <iostream>

using namespace std;

int main() {
int n=10;
 for(int row =1; row<=n*2; row++){
  if(row<=n){

  for (int col = 1; col <=row; col++)
  {
    cout << col;
  }
  }
  else if(row>n) {
    for (int col =1; col<=n*2-row-1; col++)
  {
    cout << col;
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
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1
 
  cout<< endl;
 }
}