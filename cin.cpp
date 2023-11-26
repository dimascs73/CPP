#include <iostream>
#include <string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    char s;
    char letters[100];
    char symbols[100];
    string lt[10];
    int numbers[10];
    int flag_number = 0;
    int flag_letter = 0;
    int flag_lt = 0;
    int flag_symb = 0;
    

    while (true)
    {
        s = cin.peek();

        if (s == '\n')
        {
        if (flag_letter > 0)
           {
            for (int i = 0; i < flag_letter; i++)
            {
                lt[flag_lt] += letters[i];
                letters[i] = 0;
            }
           flag_lt++;
           flag_letter = 0;           
        }    
           
        break;
        }
        if (s >= '0' && s <= '9')
        {
           cin>> numbers[flag_number];
           flag_number++;
           if (flag_letter > 0)
           {
            for (int i = 0; i < flag_letter; i++)
            {
                lt[flag_lt] += letters[i];
                letters[i] = 0;
            }
           flag_lt++;
           flag_letter = 0;           
           }
           
           continue; 
        }
        
        else
        {
        int t = static_cast<int>(s);

        if (t >= 97 && t <= 122 || t >= 65 && t <= 90)
        {
             cin>>letters[flag_letter];
            flag_letter++;
            continue;
        }
        if (t >= 33 && t <= 47 || t >= 58 && t <= 64 || t >= 123 && t <= 126)
        {
            cin>>symbols[flag_symb];
            flag_symb++;
            if (flag_letter > 0)
           {
            for (int i = 0; i < flag_letter; i++)
            {
                lt[flag_lt] += letters[i];
                letters[i] = 0;
            }
           flag_lt++;
           flag_letter = 0;           
           }
            continue;
        }
        }
        continue;
       
        
    }

    cout<<"Numbers:";
    for (int i = 0; i < flag_number; i++)
    {
        cout<<numbers[i]<<'\t';
    }
    cout<<'\n';

    cout<<"Letters:";

    for (int i = 0; i < flag_lt; i++)
    {
        cout<<lt[i]<<'\t';
    }
    
    cout<<'\n';
    
     cout<<"Symbols:";

    for (int i = 0; i < flag_lt; i++)
    {
        cout<<symbols[i];
    }
    
    cout<<'\n'; 


    return 0;
}
