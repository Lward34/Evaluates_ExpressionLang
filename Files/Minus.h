//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Minus.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar
//It is a subclass of the SubExpression class.

#pragma once
#include "SubExpression.h"

//define the class Minus subclass of the SubExpression
class Minus : public SubExpression
{
public:
    //define the default construtor
    Minus(Expression* left, Expression* right) : SubExpression(left, right)

    {
    }
    //define the function evaluate()
     int evaluate()

    {

        //subtract the value of right from the value of the left
        //and return the value.
        return left->evaluate() - right->evaluate();

    }
};
