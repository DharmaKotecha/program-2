// Professor class is an obtained class stores location of the office
// Author: Dharma Kotecha
// Date: 16/10/2022

#include "professor.h"

#include <string>
using namespace std;

professor::professor()
{
    mOffice = "";
}

professor::professor (string name, string office)
{
    mName = name;
    mOffice = office;
}

professor::~professor()
{

}

string professor:: getOffice()
{
    return mOffice;
}
