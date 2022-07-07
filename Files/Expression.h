//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Expression.h
//This title provides: this abstract class supports the arithmetic tree;
//it is at the root of the inheritance hierarchy.
// This abstract class has two subclasses (SubExpression.h and Operand.h)


#pragma once

class Expression
{
public:
    virtual int evaluate() = 0;
};

