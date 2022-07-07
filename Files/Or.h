//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Or.h
//This title provides: this subclass supports the relational, logical, and condition 
//expression operators as defined in the extension to the grammar

#pragma once
#include "SubExpression.h"

class Or : public SubExpression
{
public :  Or(Expression* left, Expression* right) : SubExpression(left, right)
{
}
	  int evaluate()
	  {
		  return (int)(left->evaluate() || right->evaluate());
	  }
};

