#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;



void get_array(vector<int*> A){
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
    cin>>N;
    int sum_max = 0;
    vector <int*> A(N);
    A.resize(N);

    get_array(A);
    
    for (int i = 0; i < N-1; i++)
    {
        

        for (int k = i + 5 ; k < N; k++){}
        cout<<A[i];
    }



    return 0;
 
    }
