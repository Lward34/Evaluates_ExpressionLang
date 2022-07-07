//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Less.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar.


#pragma once
#include "SubExpression.h"

class Less : public SubExpression
{
public:
	Less(Expression* left, Expression* right) : SubExpression(left, right)
	{
	}
	int evaluate()
	{
		return left->evaluate() < right->evaluate();
	}
};

