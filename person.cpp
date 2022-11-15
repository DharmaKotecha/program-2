// Person class and base class makes the name for the person
// Author: Dharma Kotecha
// Date: 16/10/2022

#include "person.h"
#include <string>

using namespace std;

person::person()
{
    //ctor
    mName = "";
}

person::~person()
{
    //dtor
}

person::person (string name)
{
    mName = name;
}

string person::getName()
{
    return mName;
}
