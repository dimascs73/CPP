#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct Number;
struct BinaryOperation;

struct Visitor {
    virtual void visitNumber(Number const * number) = 0;
    virtual void visitBinaryOperation(BinaryOperation const * operation) = 0;
    virtual ~Visitor() { }
};

struct Expression
{
    virtual double evaluate() const = 0;
    virtual void visit(Visitor * vistitor) const = 0;
    virtual ~Expression() { }
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

struct BinaryOperation : Expression
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
    Expression const * left;
    Expression const * right;
    char op;
    
};

bool check_equals(Expression const *left, Expression const *right)
{
    int *l = (int*)left;
    int *r = (int*)right;
    
    if (*l == 4 && *r == 4)
    {
        return true;
    }
    else return false;
}


int main(int argc, char const *argv[])
{
    
    Expression* sube = new BinaryOperation(new Number(4.5), '*', new Number(5));

    Expression * expr = new BinaryOperation(new Number(3), '+', sube);

    std::cout << expr->evaluate() << std::endl;

    delete expr;

    return 0;
}
