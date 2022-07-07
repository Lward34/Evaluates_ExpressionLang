//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Operand.h
//This title provides: this subclass defines the leaf nodes of 
//the arithmetic expression tree that contains variables. 
//It is one of the subclass of the Operand class

#pragma once
#include "SubExpression.h"

class Variable : public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};
