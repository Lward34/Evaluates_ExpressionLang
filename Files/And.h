//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:And.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar.
//It is a subclass of the SubExpression class.



#pragma once
#include "Expression.h"
#include "SubExpression.h"

class And : public SubExpression
{
public:
	And(Expression* left, Expression* right) : SubExpression(left, right)
	{
	}
	int evaluate()
	{
		return(int)(left->evaluate() && right->evaluate());
	}
};

