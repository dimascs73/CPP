#include <iostream>
#include <cmath>


int main()
{
    
    int a = 8;
    
    int v [a][a];
    int fig_i = 0, fig_j = 0;
    
  
    
    
    for (int i = 0; i < a; i++) {
        for (int j = 0;j < a; j++) {
           std::cin>>v[i][j];
            if (v[i][j] == 1){
                fig_i = i;
                fig_j = j;
            }
        }
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (((abs (i-fig_i) - abs(j - fig_j)) == 1) && (abs (i-fig_i) <= 2) && (abs(j - fig_j) <= 2)
                 && (abs (i-fig_i) > 1) )
             { v[i][j]=2; }
            if (((abs (j-fig_j) - abs(i - fig_i)) == 1) && (abs (i-fig_i) <= 2) && (abs(j - fig_j) <= 2)
                 && (abs (j-fig_j) > 1) )
             { v[i][j]=2; } 
        }
        
    }
    
    v[fig_i][fig_j] = 1;

    for (int i = 0; i < a; i++, std::cout<<std::endl)
    {
        for (int j = 0; j < a; j++)
        {
            std::cout<<v[i][j]<<' ';
        }
    }
                
            
  

    return 0;
}

