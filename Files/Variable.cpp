//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Variable.cpp
//This title provides: the bodies of the member functions of the Variable class
//are contained in this class Variable (Source file)


#include <strstream>
#include<iostream>
#include <vector>
using namespace std;

#include "Expression.h"
#include "Operand.h"
#include "Variable.h"
#include "SymbolTable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}