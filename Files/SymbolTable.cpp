//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:SymbolTable.cpp
//This title provides: the bodies of the member functions of the SymbolTable class
//are contained in this class SubExpression (Source file)

#include <string> 
#include <vector> 
using namespace std;

#include "SymbolTable.h"

void SymbolTable::insert(string variable, int value)
{
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

int SymbolTable::lookUp(string variable) const
{
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
            return elements[i].value;
    return -1;
}

void SymbolTable::init()
{
    if (elements.size() >=0)
    {
        for (int i =(int)elements.size(); i > 0; i--) {
            elements.pop_back();
        }
    }
}