#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include "DigitalRoot.h"

using namespace std;

DigitalRoot::DigitalRoot()
{
    //ctor
}

DigitalRoot::DigitalRoot(int n)
{
    N = n;
}

DigitalRoot::~DigitalRoot()
{
    //dtor
}

int DigitalRoot::getRootValue()
{
    N = askForN();

    if(validateInput(N))
        return getDigitalRoot();
    else
        return 0;
}

int DigitalRoot::getDigitalRoot()
{
    int ctr = 0;
    stringstream stream;
    stream << N;
    string num = stream.str();

    for(int i=0; i<num.length() ; i++)
        ctr += num[i] - '0';

    N = ctr;
    return ctr < 10 ? ctr : getDigitalRoot();
}

int DigitalRoot::askForN()
{
    int input;
    cout << "Input a number from 1 to 999 only? ";

    while(!(cin >> input)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Input a number from 1 to 999 only? ";
    }

    return input;
}

bool DigitalRoot::validateInput(int n)
{
    return n > 0 && n < 1000 ? true : false;
}
