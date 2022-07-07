//Author:Lilian Ward
//CMSC330
// October 1, 2021
//File:Module3.cpp
//This title provides: Main functionality, access the txt.file


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
using namespace std;

// header files
#include "SubExpression.h"
#include "Expression.h"
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


//create an object of SymbolTable
SymbolTable symbolTable;
int main();

void parseAssignments(istream& inStream = cin);

int main()
{

    // declare the variables
    Expression* expression;
    char paren, comma;
    string line;

    // create an input file stream
    //ifstream inputFile("input.txt");//inputFile
    istream& inputFile = cin;
    cout << "Enter expression: ";
    if (inputFile.fail())//Checks when "File Not Found" and fails
    {
        cout << "error while opening file";
    }
    else {
        string line;

        //use a loop, to read the content from the file
        while (getline(inputFile, line))
        {

            symbolTable.init();
            //if (!inputFile.is_open())
              //  break;
            stringstream in(line, ios_base::in);
            in >> paren;
            cout << line << "";
            try {
                expression = SubExpression::parse(in);
                if (expression) {
                    //deals with expression
                }
                else {
                    cout << "Expression variable is null" << endl;
                    return -1; // indicating error
                }

                in >> comma;
                // call the function
                parseAssignments(in);
                // Displaying the results
                cout << "Value = " << expression->evaluate() << endl;
            }
            catch (exception) {
                return EXIT_FAILURE;
            }

        }
        system("pause");
        return 0;
    }
}
void parseAssignments(istream& inStream)
{
    char assignop, delimiter;
    string variable;
    int value;
    do
    {
        variable = parseName(inStream);
        inStream >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    } while (delimiter == ',');
}
