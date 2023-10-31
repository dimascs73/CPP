#include <iostream>

using namespace std;

int main() {
  int a;
  int b;
  int c;
  int d;
  int e;
  
cin>>a>>b>>c;

//d = a/100;
//e = a%10;
 a = a/10%10;

d = b/100;
e = b%10;
b = b/10%10;

d = c/100;
e = c%10;
c = c/10%10;

 cout<<a*100+b*10+c;


  return 0;
}

