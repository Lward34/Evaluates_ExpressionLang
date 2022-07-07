//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Operand.h
//This title provides: this subclass defines the leaf nodes of the arithmetic expression tree. 
//It is one of the subclass of the Expression class


#pragma once
#include <iostream>
#include "Expression.h"

class Operand : public Expression
{
public:
    static Expression* parse(istream& inStream = cin);
};


