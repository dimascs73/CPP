#include <iostream>
#include <bitset>
using namespace std;

int subtractBinaries(int x, int y) {
    while (y != 0) {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int main() {

  int a;
  int b = 1;

  cin>>a;

  int bin = subtractBinaries(a, b);

  cout<<bin;
  
  return 0;
}