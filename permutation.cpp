#include <iostream>
#include <string>
#include <vector>

using namespace std;

void mass_input(const int size, int* arg){
      for (int i = 0; i < size; i++) // Заполняем массив
        {
            arg[i] = i;
            cout<<arg[i]<<'\t';
       }
        cout<<endl;
        cout<<endl;
        cout<<"_________________________________________________\n";

}

void swapM (const int size, int* arg){
//vector <int> arg [size];
  for (int k = 0 ; k < size - 1 ; k++)
  {
      
  for (int i = k-1; i < size -1; i++)
  {
    swap (arg[i], arg[i+1]);
    cout<<arg[i]<<'\t';
  }
  cout<<endl;
  }

}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size = 4;
    int* arg = new int[size];

    mass_input(size, arg); //вводим массив
      
      // делаем перестановки

    swapM (size, arg);
      
    
    cout<<"___________"<<endl;
    
    delete[] arg;

     system ("pause");
  
   return 0;
}