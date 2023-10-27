#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;


void get_array(vector<int*> &A){
srand(time(NULL));
for (int i = 0; i < A.size(); i++)
    
    {
        int x = (rand() % 10) + 1;
        //int x = i+1;
        A[i] = new int(x);
        cout<<*(A[i])<<'\t';
    }
    cout<<endl;

    }


int main(){

    
    int N;
    cout<<"Enter number of array";
    cin>>N;
    cout<<endl;
    int sum_max = 0;
    vector <int*> A(N);
    A.resize(N);

    get_array(A); // заносим данные в массив который будем проверять.
    
        
    static int SIZE = 5; // размер между числами для суммы
    int arr[SIZE];
    int max_pair = -1;
    int max_in_que = -1;
    int current = 0;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = *(A[i]);
          
    }
    

    int SIZE_end = 0; // начальный индекс массива с которым будет push/pop

    for (int k = SIZE; k < N; k++)
    {
        current = *(A[k]); //новое число поступающее в массив
        int number_leaving = arr[SIZE_end]; //число уходящее из массива проверяемое на максимальность 
        arr[SIZE_end] = current;
        SIZE_end++; // следующий индекс для push/pop
        if (SIZE_end > SIZE)
        {
            SIZE_end = 0; //если индекс больше размера массива, то он возвращается в нулевой индекс (прокручивание массива)
        }
        if (number_leaving > max_in_que)
        {
            max_in_que = number_leaving; // проверка уходящего числа на максимальность в отброшенных
        }
        int current_sum = current + max_in_que; //если уходящее максимальное то проверка ее суммы с поступающим в массив
        if(current_sum > max_pair)
        {
            max_pair = current_sum; // если они максимальны то теперь они чемпионы
            cout<<current<<" + "<<max_in_que<<" = "<<max_pair<<endl;
        }
       
        
    }
    cout<<"\n_______________\n"<<max_pair;

    return 0;
 
    }
