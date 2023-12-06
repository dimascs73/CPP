#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>


int main()
{
    
    int a = 8;
    
    int v [a][a];
    int fig_i = 0, fig_j = 0;
    int c_i = 0, d_j = 0;
    int x_i = 0, y_j = 0;
  
    
    
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
    if (fig_i > fig_j) {
        c_i = fig_i - fig_j;
        x_i = fig_i + fig_j;
        
    }
    else {
        d_j = fig_j - fig_i;
        y_j = fig_i + fig_j;
    }
    
    v[c_i][d_j] = 2;
    v[x_i][y_j] = 2;
    
    
    for (int k = 0; k < a ; k++) {
        for ( int p = 0; p < a; p++) {
            if (c_i > d_j) {
                while (c_i != a-1) {
                    c_i++;
                    d_j++;
                    v[c_i][d_j] =2;
                    x_i++;
                    y_j--;
                    v[x_i][y_j] = 2;
                }
            }
            else if (c_i <= d_j){
                while (d_j != a-1) {
                    c_i++;
                    d_j++;
                    v[c_i][d_j] = 2;
                    x_i++;
                    y_j--;
                    v[x_i][y_j] = 2;
            
            }
            }
                v[fig_i][fig_j] = 1;
            
        }
    }
        
    for (int i = 0; i < a; i++){
    for (int j =0;j<a; j++){
        std::cout<<v[i][j]<<' ';
    }std::cout<<std::endl;
}
    return 0;
}

