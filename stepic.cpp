#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct Expression 
{
    virtual double evaluate() const = 0;

    virtual ~Expression() {}
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}
    double evaluate() const override
    {
        return value;
    }
    ~Number(){}

private:
    double value;
};

struct BinaryOperation : public Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), right(right), op(op)
    {}
    double evaluate() const override
    {
        double result  = left->evaluate();
        if (op == '+')
        {
            result += right->evaluate();
        }
        else if (op == '*')
        {
            result *= right->evaluate();
        }
        else if (op == '-')
        {
            result -= right->evaluate();
        }
        else if (op == '/' && right->evaluate() !=0)
        {
            result /= right->evaluate();
        }
        else std::cerr<<"Error";

       return result; 
    }

    ~BinaryOperation()
     {
        delete left;
        delete right;
    }      
private:

    Expression const* left;
    Expression const* right;
    char op;
    
};




int main(int argc, char const *argv[])
{
    
    Expression* sube = new BinaryOperation(new Number(4.5), '*', new Number(5));

    Expression * expr = new BinaryOperation(new Number(3), '+', sube);

    std::cout << expr->evaluate() << std::endl;

    delete expr;

    return 0;
}
