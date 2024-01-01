#include <iostream>
#include <string>

class Tiles
{

public:
    std::string brand =  "brand";
    double size_h = 0.0;
    double size_w = 0.0;
    int price = 0;

    Tiles () {}

    Tiles (std::string(brand), double(size_h), double(size_w), int(price))
          :brand(brand), size_h(size_h) 
          ,size_w(size_w), price(price)
    {
        
    }
    
    void getData()
    {
      std::cout<<brand<<": "<<size_h<<"x"<<size_w<<" - "<<price<<"$"<<'\n';
    }
};





int main ()
{
    Tiles t1  {"brand1", 2.5, 2.5, 500};
    Tiles t2  {"brand2", 4.5, 1.5, 200};

    t1.getData();
    t2.getData();
    
    return 0;
}