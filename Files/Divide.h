//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Divide.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar.
//It is a subclass of the SubExpression class.



#pragma once
#include "SubExpression.h"


//define the class Divide subclass of the SubExpression
class Divide : public SubExpression
{
public:
    //define the default construtor
    Divide(Expression* left, Expression* right) : SubExpression(left, right)
    {
    }
    //define the function evaluate()
    int evaluate()
    {
        //divide the value of left and value of the right
        //and return the value.
        return left->evaluate() / right->evaluate();
    }

};

