//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Tertiary.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar.


#pragma once
#include "SubExpression.h"

class Tertiary : public SubExpression
{
public:
	Tertiary(Expression* left, Expression* right, Expression* condition) : SubExpression(left, right)
	{
		this->condition = condition;
	}
	int evaluate()
	{
		return ((condition->evaluate()) ? left->evaluate() : right->evaluate());
	}
private:

	Expression* condition;

};

