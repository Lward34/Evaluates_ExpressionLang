//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Literal.h
//This title provides:This subclass defines the nodes of that contain literal values.
// is the subclass of the Operand class

#pragma once
#include "Operand.h"


class Literal : public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    int value;
};


