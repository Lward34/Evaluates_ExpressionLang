//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Operand.cpp
//This title provides: The body of its only member function is contained 
//in this class, Operand.cpp.
//This class has two subclasses(Variable.h and Literal.h)


#include <cctype>
#include <iostream>
#include <list>
#include <string>

using namespace std;

#include "SubExpression.h"
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
#include "Parse.h"
#include "Variable.h"


Expression* Operand::parse(istream &inStream)
{
    char paren;
    int value;

    inStream >> ws; 
    if (isdigit(inStream.peek()))
    {
        inStream >> value;
        Expression* literal = new Literal(value);
        return literal;
    }
    if (inStream.peek() == '(')
    {
        inStream >> paren;
        return SubExpression::parse(inStream);
    }
    else
        return new Variable(parseName(inStream));
    return 0;
}

