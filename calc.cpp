#include <iostream>
#include <stack>

struct Lecsema
{
    char type; // 0 для чисел, + для знака +
    double value;
};

void Math_t(std::stack<Lecsema>& number, std::stack<Lecsema>& oper_ator, Lecsema& item)
{
    double a, b, c;
   
    a = number.top().value;
    number.pop();
    switch (oper_ator.top().type) {
    case '+':

        b = number.top().value;
        number.pop();
        c = b + a;
        item.type = '0';
        item.value = c;
        number.push(item);
        oper_ator.pop();
        break;
    case '-':
        b = number.top().value;
        number.pop();
        c = b - a;
        item.type = '0';
        item.value = c;
        number.push(item);
        oper_ator.pop();
        break;

    case '*':
        b = number.top().value;
        number.pop();
        c = b * a;
        item.type = '0';
        item.value = c;
        number.push(item);
        oper_ator.pop();

        break;
    case '/':
        b = number.top().value;
        number.pop();
        if (a == 0) {
            std::cerr << "Can't devide by 0";
            break;
        }
        else
        {
            c = b / a;
            item.type = '0';
            item.value = c;
            number.push(item);
            oper_ator.pop();
            break;
        }

    default:

        break;
    }
    

}

int Rang (char CH)
{
    if (CH == '+' || CH == '-') {return 1;}
    if (CH == '*' || CH == '/') {return 2;}
    else return 0;

}


int main() {

    char Ch;
    double value;

    std::stack <Lecsema> num;
    std::stack <Lecsema> oper;
    Lecsema item;

    while (true)

    {
       
        Ch = std::cin.peek();


        if (Ch == '\n') {
            break;
        }
        if (Ch >= '0' && Ch <= '9') {

            std::cin >> value;
            item.type = '0';
            item.value = value;
            num.push(item);
            continue;

        }
        if (Ch == '+' || Ch == '-' || Ch == '*' || Ch == '/') {
            if  (oper.size() == 0){
            item.type = Ch;
            item.value = 0;
            oper.push(item);
            std::cin.ignore();
            continue;
            }
            if (oper.size() !=0 && (Rang(Ch) > Rang(oper.top().type))){
            item.type = Ch;
            item.value = 0;
            oper.push(item);
            std::cin.ignore();
            continue;  
            }
            if (oper.size() !=0 && (Rang(Ch) <= Rang(oper.top().type))){
            Math_t(num, oper, item);
             continue;   
            }
        }

    }
    while (oper.size() !=0){
    Math_t(num, oper, item);

   
    }
    std::cout << "Answer: " << num.top().value << std::endl;
    return 0;
}