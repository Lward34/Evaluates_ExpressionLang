//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:SymbolTable.h
//This title provides: this subclass is the "interpreter" uses a symbol table 
// that is implemented with an unsorted list defined by the class SymbolTable. 

#pragma once
#include<vector>
#include "SubExpression.h"

class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, int value);
    int lookUp(string variable) const;
    void init();
private:
    struct Symbol
    {
        Symbol(string variable, int value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        int value;
    };
    vector <Symbol> elements;
};

