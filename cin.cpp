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
       /*  if (s >=char(33) || s <= char(47) || s >= char(58)
            || s <= char(64) || s >=char(91) || s <= char(96)
            || s >=char(123) || s <= char(127) )
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
        } */
        
        if (s >= char(97) || s <= char(122) || s >= char(97) || s <= char(90))
        {
            cin>>letters[flag_letter];
            flag_letter++;
            continue;
        }
       
        
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
    
   /*  cout<<"Symbols:";

    for (int i = 0; i < flag_lt; i++)
    {
        cout<<lt[i];
    }
    
    cout<<'\n'; */


    return 0;
}
