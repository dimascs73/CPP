#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <string>
#include <algorithm>
#include <windows.h>

using std::vector;
using std::string;
namespace rn = std::ranges;
namespace vu = std::views;
/*
S[1][0], S[2][0], S[n][0]
*/
int main()
{
   vector<string> S{"flower", "kloor", "flood", "flower",};
   string a{S[0]};
   //vector<string>::iterator it; 

   string res{};

   for (int i = 0; i < a.size();){
     for (int k = 1; k < S.size();){
        
        if (S[k][i] == a[i] && k == S.size() - 1 ){
            res.push_back(a[i]);
            ++i;
            k = 1;
        }
        else if (S[k][i] == a[i] && k < S.size() ){
            ++k;
            continue;}
        else if (S[k][i] != a[i]){break;}
        

     }
    break; 
   }
    if (res == ""){
        std::cout<<"";
    }
    else {std::cout<<res<<std::endl;}

    auto ru = S | vu::filter([&a](string s){ return s.contains(a);});
    
    system("cls");
    
    for (auto n: ru){

        std::cout<<n<<" ";
    }
std::cout<<S[0][3];
   return 0;
}

