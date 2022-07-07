//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:SubExpression.cpp
//This title provides: the bodies of the member functions of the SubExpression class
//are contained in this class SubExpression (Source file)


#include "SymbolTable.h"
#include "Parse.h"
#include "Operand.h"
#include "Plus.h"
#include "Minus.h"
#include "Times.h"
#include "Divide.h"
#include "Greater.h"
#include "Less.h"
#include "Equal.h"
#include "And.h"
#include "Or.h"
#include "Negation.h"
#include "Tertiary.h"
#include "Literal.h"
#include "Variable.h"



SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}
Expression* SubExpression::parse(istream& inStream)
{
    Expression* left;
    Expression* right;
    Expression* condition;

    char operation, paren;

    left = Operand::parse(inStream);
    inStream >> operation;

    // At this point the next operation will be an <op>, or ':' or '!'
    if (operation == '!')// Negation Expression
    {
        inStream >> paren;
        return new Negation(left, NULL);//Passing the second argument value

    }
    else if (operation == ':') {// Tertiary Expression
        right = Operand::parse(inStream);
        inStream >> paren;
        condition = Operand::parse(inStream);
        inStream >> paren;
        return new Tertiary(left, right, condition);

    }
    else {
        //else for every other Expression
        //This two operations will be performed for the following cases
        right = Operand::parse(inStream);
        inStream >> paren;
    }

    switch (operation)
    {
    case '+':
        return new Plus(left, right);
    case '-':
        return new Minus(left, right);
    case '*':
        return new Times(left, right);
    case '/':
        return new Divide(left, right);
    case '>':
        return new Greater(left, right);
    case '<':
        return new Less(left, right);
    case '=':
        return new Equal(left, right);
    case '&':
        return new And(left, right);
    case '|':
        return new Or(left, right);
    }

    return 0;
};





