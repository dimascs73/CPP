#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    int a;
    int b;
    int c;
    
   
    cin>>a>>b>>c;
 
    int max = a;
    int pos2 = a;
    int min = a;

    if (a < b && a < c) { min = a;}
    if (b < a && b < c) { min = b;}
    if (c < a && c < b) { min = c;}
    if ((a > b && a < c) || (a < b && a > c)) {pos2 = a;}
    if ((b < a && b > c) || (b > a && b < c)) {pos2 = b;}
    if ((c > a && b > c) || (a > c && b < c)) {pos2 = c;}
    if (a > b && a > c) { max = a;}
    if (b > a && b > c) { max = b;}
    if (c > a && c > b) { max = c;}
    
    cout<<min<<' '<<pos2<<' '<<max;

        return 0;
}