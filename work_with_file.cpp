#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;


int main(){

string path = "b.txt";

ifstream file;
static int SIZE = 6; // размер между числами для произведения
int arr[SIZE];
int min_pair = 50001;
int min_in_que = 50001;
int current = 0;


file.open(path);
int index = 0;
int SIZE_end = 0;
int current_composition = 1;
//int number_leaving = 0;
do
{
    for (int k = 0; k < SIZE; k++)
    {
        if (file.eof())
        {
           break;
        }
        if (index < SIZE){
            file>>arr[k];
            index ++;
        }
        if (index >= SIZE)
        {
        while (int k = SIZE && !file.eof())
        {
        file>>current; //новое число поступающее в массив
        
        int number_leaving = arr[SIZE_end]; //число уходящее из массива проверяемое на максимальность 
        arr[SIZE_end] = current;
        SIZE_end++; // следующий индекс для push/pop
        if (SIZE_end > SIZE)
        {
            SIZE_end = 0; //если индекс больше размера массива, то он возвращается в нулевой индекс (прокручивание массива)
        }
        if (number_leaving < min_in_que && number_leaving % 2 != 0 )
        {
            min_in_que = number_leaving; // проверка уходящего числа на максимальность в отброшенных
        }
        if (current % 2 != 0)
        {
        current_composition = current * min_in_que; //если уходящее максимальное то проверка ее суммы с поступающим в массив
        }
        else
        {continue;} 
        if(current_composition < min_pair)
        {
            min_pair = current_composition; // если они максимальны то теперь они чемпионы
            cout<<current<<" * "<<min_in_que<<" = "<<min_pair<<endl;
        }   
        k++;
        }
        }
    }
    
    }
while (!file.eof());

cout<<"\n_______________\n"<<min_pair;

file.close();


return 0;

}