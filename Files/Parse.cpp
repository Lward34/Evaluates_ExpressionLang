//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Parse.cpp
//This title provides: This class is the body of utility function parseName() 


#include <cctype>
#include <iostream>
#include <string>

using namespace std;
#include "parse.h"

//definition of the function parseName()

string parseName(istream& inStream)
{

    char alnum;

    string name = "";

    inStream >> ws;

    while (isalnum(inStream.peek()))

    {

        inStream >> alnum;

        name += alnum;

    }

    return name;

}
