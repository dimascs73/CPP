#include <iostream>
#include <cmath>

int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 
    // 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dec_value += last_digit * base; 
        base = base * 2; 
    } 
  
    return dec_value; 
} 

void decToBinary(int n)
{
    // Array to store binary number
    int binaryNum[32];
 
    // Counter for binary array
    int i = 0;
    while (n > 0) {
        // Storing remainder in binary
        // array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // Printing binary array in reverse
    // order
    for (int j = i - 1; j >= 0; j--)
        std::cout << binaryNum[j];
}

int main()
{
    
   int num;
   int lt = 2;
   int sum;

   std::cin>> num;

  sum = binaryToDecimal(num)*lt;

   decToBinary(sum);
    

    return 0;
}

