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

    get_array(A);
    
        
    static int SIZE = 5;
    int arr[SIZE];
                    
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = *(A[i]);
           
    }
    

//for (int k = i + 5 ; k < N; k++){}
 //       cout<<A[i];

    return 0;
 
    }
