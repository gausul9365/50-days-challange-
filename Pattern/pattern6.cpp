#include <iostream>

using namespace std;

int main() {

int n =5;

for (int row = 1; row <= 2*n-1; row++)
{
  if(row<=n){
      for(int space=1; space<=n-row; space++){
          cout<<" ";
        }
    for (int col = 1; col <= row; col++)
    {
      cout<<"*";
    }
   
  }
    else if(row>n){
      for(int col=1; col<=2*n-row; col++){
        for(int space=1; space<=row; space++){
          cout<<" ";
        }
        cout<<"*";
      }
    }
    cout<<endl;
    
  }  

  return 0;

}

