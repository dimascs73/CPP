#include <iostream>

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    
	String(const char *str = "")
    {

        size =std::strlen(str);

        this -> str = new char [size+1];

        for (size_t i = 0; i < size+1; i++)
        {
            this -> str[i] = str[i];
        } 


    }
 
 String(size_t n, char c): size(n), str(new char[n+1])
    {
        memset(str,c,n);
        str[size+1] = '\0';
    }

    
	~String()
    {
        delete[] str;
    }
    
   char & at(size_t idx)       { return str[idx]; }
    char   at(size_t idx) const { return str[idx]; }


	size_t size;
	char *str;
};


int main()
{
   
    String greet("Hello");
    char ch1 = greet.at(0); 
     
    String const const_greet("Hello, Const!");
    char const &ch2 = const_greet.at(0); 
        

    return 0;
}