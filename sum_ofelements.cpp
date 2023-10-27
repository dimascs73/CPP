#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){

    vector <int> A;
    int N = 10;
    int sum_max = 0;
    srand(time(NULL));
    A.resize(N);
    for (int i = 0; i < A.size(); i++)
    {
        A[i] = rand() % 10;
        cout<<A[i]<<'\t';
    }
    cout<<endl;
    for (int i = 0; i < N-1; i++)
    {
        

        for (int k = i + 5 ; k < N; k++)
        {
            int pair = A[i]+ A[k];
            if (pair > sum_max)
            {
                sum_max = pair;
            }
            
        }
        
    }
    cout<<sum_max;

    return 0;
}