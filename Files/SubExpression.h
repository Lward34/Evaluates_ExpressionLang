//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:SubExpression.h
//This title provides:This subclass defines the node of the binary arithmetic expression tree.
// It is one of the subclass of the Expression.h  
// The SubExpression class has four subclasses (Plus.h,Minus.h,Times.h,Divide.h)

#pragma once
#include<iostream>
#include<istream>
#include<sstream>

#include "Expression.h"

using namespace std;

//define the class SubExpression subclass of the Expression
class SubExpression : public Expression
{
public:

    SubExpression(Expression* left, Expression* right);
    static Expression* parse(istream& inStream=cin);//get/reads data from file

protected:
    //declare the variables
    Expression* left;
    Expression* right;
    Expression* condition;
    
};
